/*
 * XREFs of WmipProcessEvent @ 0x140740850
 * Callers:
 *     WmipEventNotification @ 0x14073EFE0 (WmipEventNotification.c)
 *     WmipSendGuidUpdateNotifications @ 0x1407406EC (WmipSendGuidUpdateNotifications.c)
 *     WmipGenerateMofResourceNotification @ 0x1407B0210 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407BB4BC (WmipGenerateBinaryMofNotification.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ObReferenceObjectSafe @ 0x1402EEA30 (ObReferenceObjectSafe.c)
 *     WmipWriteWnodeToObject @ 0x14036E154 (WmipWriteWnodeToObject.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     WmipUnreferenceEntry @ 0x1406817E8 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x140682F00 (WmipFindGEByGuid.c)
 *     WmipDereferenceEvent @ 0x14092DB3C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipProcessEvent(_DWORD *P, char a2, char a3)
{
  char v3; // bp
  PVOID v4; // rsi
  PVOID v5; // rdi
  PVOID v6; // rbx
  volatile signed __int64 *GEByGuid; // r13
  unsigned int v8; // r15d
  volatile signed __int64 *v10; // r12
  __int64 v11; // rbp
  void (__fastcall *v12)(PVOID, _QWORD); // rax
  __int64 v13; // rax
  void *v17; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = P;
  if ( (P[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = P;
    v17 = 0LL;
LABEL_3:
    if ( (*((_DWORD *)v6 + 11) & 0x80u) != 0 )
      v6 = (PVOID)WmipIncludeStaticNames(v6);
    GEByGuid = WmipFindGEByGuid((_QWORD *)v6 + 3, 1);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v10 = (volatile signed __int64 *)*((_QWORD *)GEByGuid + 5);
      if ( v10 != GEByGuid + 5 )
      {
        do
        {
          v11 = (__int64)(v10 - 5);
          v10 = (volatile signed __int64 *)*v10;
          if ( ObReferenceObjectSafe(v11) )
          {
            if ( (*(_DWORD *)(v11 + 164) & 2) != 0 )
            {
              v12 = *(void (__fastcall **)(PVOID, _QWORD))(v11 + 72);
              if ( v12 )
                v12(v6, *(_QWORD *)(v11 + 80));
            }
            else if ( (int)WmipWriteWnodeToObject(v11, (unsigned int *)v6, a2) < 0 )
            {
              v8 = -1073741823;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v11);
          }
        }
        while ( v10 != GEByGuid + 5 );
        v5 = v17;
        v4 = P;
        v3 = a3;
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v13 = WmipDereferenceEvent();
  v17 = (void *)v13;
  v5 = (PVOID)v13;
  if ( v13 )
  {
    v6 = (PVOID)v13;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
