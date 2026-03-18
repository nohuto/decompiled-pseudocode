/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0020180
 * Callers:
 *     ACPITableLoad @ 0x1C001F8F0 (ACPITableLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 *a1)
{
  unsigned int v2; // ebp
  KIRQL v3; // al
  _QWORD *v4; // rdx
  volatile signed __int32 *v5; // rdi
  __int16 v6; // ax
  KIRQL v7; // al
  __int64 v8; // rcx
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rbx
  int v15; // esi
  __int64 *v16; // rcx
  _QWORD v17[10]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v4 = (_QWORD *)(*a1 + 24);
  if ( (_QWORD *)*v4 == v4 )
  {
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  }
  else
  {
    v5 = (volatile signed __int32 *)(*v4 + 120LL);
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v5 + 2);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
    if ( v5 )
    {
      do
      {
        v6 = *(_WORD *)(*(_QWORD *)v5 + 66LL);
        if ( v6 == 6 )
        {
          v12 = EnableDisableCMOSRegions(v5);
          if ( v12 < 0 )
            v2 = v12;
        }
        else if ( v6 == 10 )
        {
          v13 = *(_QWORD *)(*(_QWORD *)v5 + 96LL);
          if ( v13 )
          {
            if ( *(_BYTE *)(v13 + 12) == 5 && AMLIIsNamedChildPresent(a1, 1145653343) )
            {
              v14 = AMLIGetNamedChild(a1, 1195725407);
              if ( v14 )
              {
                memset(v17, 0, sizeof(v17));
                WORD1(v17[0]) = 1;
                v17[2] = 5LL;
                WORD1(v17[5]) = 1;
                v17[7] = 1LL;
                v15 = AMLIAsyncEvalObject(v14, 0LL, 2u, v17, 0LL, 0LL);
                AMLIDereferenceHandleEx((volatile signed __int32 *)v14);
                if ( v15 < 0 )
                  v2 = v15;
              }
            }
          }
        }
        v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
        v8 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
        if ( !v8 || (v9 = **(_QWORD **)v5, v9 == v8 + 24) )
        {
          v10 = 0LL;
        }
        else
        {
          v10 = (volatile signed __int32 *)(v9 + 120);
          dword_1C0081AC8 = 0;
          byte_1C0081ACC = 0;
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement(v10 + 2);
        }
        ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        {
          v16 = *(__int64 **)v5;
          if ( v5 == (volatile signed __int32 *)(*(_QWORD *)v5 + 120LL) )
          {
            DereferenceObjectEx((unsigned __int64)v16);
          }
          else
          {
            DereferenceObjectEx((unsigned __int64)v16);
            HeapFree(v5);
          }
        }
        v5 = v10;
      }
      while ( v10 );
    }
  }
  return v2;
}
