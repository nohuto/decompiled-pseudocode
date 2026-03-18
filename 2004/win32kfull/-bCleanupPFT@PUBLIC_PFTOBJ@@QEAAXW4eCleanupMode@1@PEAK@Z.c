/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C0105FD4
 * Callers:
 *     vCleanupPrivateFonts @ 0x1C0011A20 (vCleanupPrivateFonts.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C0105F24 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0012A4C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

int __fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  _QWORD *v3; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  struct PFF **v9; // rbx
  struct PFF *i; // rcx
  __int64 v11; // rcx
  _QWORD v13[8]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[28]; // [rsp+68h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v3 = &retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (int)v3;
    v7 = 0;
    v8 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20LL;
    v7 = 128;
  }
  memset(v13, 0, 56);
  memset(v14, 0, sizeof(v14));
  HIDWORD(v13[1]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = v13;
  v14[18] = v13;
  if ( a3 )
    *a3 = 0;
  v9 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  if ( (_DWORD)v8 )
  {
    do
    {
      for ( i = *v9; i; i = (struct PFF *)*((_QWORD *)i + 1) )
      {
        if ( a2 != 1 )
          goto LABEL_17;
        LODWORD(v3) = *((_DWORD *)i + 13);
        if ( ((unsigned __int16)v3 & 0x400) == 0 )
          continue;
        if ( ((unsigned __int16)v3 & 0x800) != 0 )
        {
          LODWORD(v3) = (unsigned int)v3 & 0xFFFFF7FF;
          *((_DWORD *)i + 13) = (_DWORD)v3;
        }
        else
        {
LABEL_17:
          v14[2] = i;
          v14[1] = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v14;
          if ( v14[1] )
            *(_QWORD *)(v14[1] + 16LL) = v14;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse(a1, i, v9, v7) )
          {
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
            if ( a3 )
              ++*a3;
          }
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          if ( *v9 == (struct PFF *)v14 )
            *v9 = (struct PFF *)v14[1];
          v11 = v14[2];
          if ( v14[2] )
          {
            *(_QWORD *)(v14[2] + 8LL) = v14[1];
            v11 = v14[2];
          }
          LODWORD(v3) = v14[1];
          if ( v14[1] )
            *(_QWORD *)(v14[1] + 16LL) = v11;
          i = (struct PFF *)v14;
        }
      }
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  return (int)v3;
}
