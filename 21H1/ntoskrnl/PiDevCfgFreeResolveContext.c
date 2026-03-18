/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x140750EBC
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140750D24 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x14075144C (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140767988 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     _RegRtlDeleteTreeInternal @ 0x1407500B4 (_RegRtlDeleteTreeInternal.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // edi
  void **v4; // rcx
  void *v5; // rbx
  void **v6; // rax
  char *v7; // rcx
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = (void **)(*(_QWORD *)(a1 + 24) + 16LL * i);
        v5 = *v4;
        if ( *v4 == v4 )
          break;
        if ( *((void ***)v5 + 1) != v4 || (v6 = *(void ***)v5, *(void **)(*(_QWORD *)v5 + 8LL) != v5) )
          __fastfail(3u);
        *v4 = v6;
        v6[1] = v4;
        RtlFreeAnsiString((PUNICODE_STRING)v5 + 1);
        v7 = (char *)*((_QWORD *)v5 + 5);
        if ( v7 )
        {
          v8 = *((_DWORD *)v5 + 8);
          if ( (_WORD)v8 == 0x8000 )
          {
            if ( (v8 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && (v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
                v10 = *(_QWORD *)(v9 + 8);
              else
                v10 = 0LL;
              RegRtlDeleteTreeInternal(v7, 0LL, v10, 0);
            }
            ZwClose(*((HANDLE *)v5 + 5));
          }
          else
          {
            ExFreePoolWithTag(v7, 0);
          }
        }
        ExFreePoolWithTag(v5, 0);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
