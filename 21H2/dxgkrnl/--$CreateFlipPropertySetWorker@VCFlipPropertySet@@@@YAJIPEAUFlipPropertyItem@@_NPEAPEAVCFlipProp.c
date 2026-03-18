/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C0079450
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C007A2F0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C007A440 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C007B7F0 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C007BBEC (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 * Callees:
 *     ??0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C002C99C (--0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipPropertySet>(
        unsigned int a1,
        char *Src,
        __int64 a3,
        CFlipPropertySet **a4)
{
  signed int v6; // ebx
  unsigned int v7; // r13d
  char *v8; // r14
  char *Pool2; // rsi
  unsigned int v10; // edi
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r8d
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  char *v20; // r13
  unsigned int i; // r15d
  char *v22; // rbx
  size_t v23; // r8
  char *v24; // rdx
  __int64 v25; // rdx
  CFlipPropertySet *v26; // rax
  CFlipPropertySet *v27; // rcx

  v6 = 0;
  if ( a1 )
  {
    v7 = 0;
    v8 = 0LL;
    Pool2 = 0LL;
    v10 = 0;
    v11 = 0xFFFFFFFFLL;
    if ( Src )
    {
      v12 = 32LL * a1;
      v13 = 0xFFFFFFFFLL;
      if ( v12 <= 0xFFFFFFFF )
        v13 = (unsigned int)v12;
      v6 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v12 <= 0xFFFFFFFF )
      {
        Pool2 = (char *)ExAllocatePool2(257LL, (unsigned int)v13, 1768964934LL, 0xFFFFFFFFLL);
        if ( !Pool2 )
          v6 = -1073741801;
        v11 = 0xFFFFFFFFLL;
      }
      if ( v6 < 0 )
      {
        v7 = 0;
      }
      else
      {
        if ( &Src[v13] < Src || (unsigned __int64)&Src[v13] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Pool2, Src, (unsigned int)v13);
        v7 = 0;
        v11 = 0xFFFFFFFFLL;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    v14 = 0;
    while ( v6 >= 0 )
    {
      if ( v14 >= a1 )
      {
        v8 = (char *)ExAllocatePool2(257LL, v7, 1651524422LL, 0xFFFFFFFFLL);
        if ( !v8 )
          v6 = -1073741801;
        if ( v6 >= 0 )
        {
          v20 = v8;
          for ( i = 0; v6 >= 0 && i < a1; ++i )
          {
            v22 = &Pool2[32 * i];
            v23 = *((unsigned int *)v22 + 4);
            v24 = (char *)*((_QWORD *)v22 + 3);
            if ( &v24[v23] < v24 || (unsigned __int64)&v24[v23] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v20, v24, v23);
            *((_QWORD *)v22 + 3) = v20;
            v25 = *((unsigned int *)v22 + 4);
            v20 += v25;
            if ( v10 + 16 < v10 )
            {
              v10 = -1;
              v6 = -1073741675;
            }
            else
            {
              v10 += 16;
              v6 = 0;
            }
            if ( v6 >= 0 )
            {
              if ( v10 + 4 < v10 )
              {
                v10 = -1;
                v6 = -1073741675;
              }
              else
              {
                v10 += 4;
                v6 = 0;
              }
              if ( v6 >= 0 )
              {
                if ( (unsigned int)v25 + v10 < v10 )
                {
                  v10 = -1;
                  v6 = -1073741675;
                }
                else
                {
                  v10 += v25;
                  v6 = 0;
                }
              }
            }
          }
        }
        break;
      }
      v15 = 32LL * v14;
      v16 = *(_DWORD *)&Pool2[v15 + 16];
      if ( v16 && *(_QWORD *)&Pool2[v15 + 24] )
      {
        v17 = v7;
        v18 = v7 + v16;
        v19 = -1;
        if ( v18 >= v7 )
          v19 = v18;
        v7 = v19;
        v6 = v18 < v17 ? 0xC0000095 : 0;
      }
      else
      {
        v6 = -1073741811;
      }
      ++v14;
    }
    if ( v6 >= 0 )
    {
      v26 = (CFlipPropertySet *)ExAllocatePool2(257LL, 40LL, 1936737094LL, v11);
      if ( v26 )
        v27 = CFlipPropertySet::CFlipPropertySet(v26, a1, (struct FlipPropertyItem *)Pool2, v8, v10);
      else
        v27 = 0LL;
      *a4 = v27;
      if ( v27 )
      {
        v8 = 0LL;
        Pool2 = 0LL;
      }
      else
      {
        v6 = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v6;
}
