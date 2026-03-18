/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x14037E7E0
 * Callers:
 *     RtlpPopUserShadowStack @ 0x140321BBC (RtlpPopUserShadowStack.c)
 *     KeVerifyContextXStateCetU @ 0x14032BCE8 (KeVerifyContextXStateCetU.c)
 *     RtlpWalkFrameChain @ 0x14032CAD0 (RtlpWalkFrameChain.c)
 *     RtlpUnwindPrologue @ 0x14032DE40 (RtlpUnwindPrologue.c)
 *     KiContinuePreviousModeUser @ 0x14032F2E0 (KiContinuePreviousModeUser.c)
 *     KiInitializeContextThread @ 0x14035513C (KiInitializeContextThread.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051F694 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlLocateExtendedFeature @ 0x1405899F0 (RtlLocateExtendedFeature.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature2(_DWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  int v8; // esi
  __int64 v9; // r9
  char *v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r11
  __int64 v15; // rax
  _DWORD *v16; // r8

  v4 = a2;
  if ( a2 - 2 > 0x3D )
    return 0LL;
  v6 = 1LL << a2;
  if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) == 0 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 20);
  if ( (v8 & 0xFFFFFFFC) != 0 )
    return 0LL;
  v9 = (int)a1[4];
  if ( *a1 > (int)v9 || a1[1] + *a1 < (int)v9 + a1[5] )
    v10 = 0LL;
  else
    v10 = (char *)a1 + v9;
  if ( !v10 )
    return 0LL;
  v11 = 2;
  if ( a4 )
  {
    if ( (v8 & 2) != 0 )
      v12 = *(_DWORD *)(a3 + 4 * v4 + 556);
    else
      v12 = *(_DWORD *)(a3 + 8 * v4 + 28);
    *a4 = v12;
  }
  if ( (*(_DWORD *)(a3 + 20) & 2) != 0 )
  {
    v13 = *((_QWORD *)v10 + 1);
    if ( (v6 & v13) != 0 )
    {
      v14 = *(_QWORD *)(a3 + 544);
      v15 = 576LL;
      if ( (unsigned int)v4 > 2 )
      {
        v16 = (_DWORD *)(a3 + 564);
        do
        {
          if ( ((1LL << v11) & v13) != 0 )
          {
            if ( ((1LL << v11) & v14) != 0 )
              LODWORD(v15) = (v15 + 63) & 0xFFFFFFC0;
            v15 = (unsigned int)(*v16 + v15);
          }
          ++v11;
          ++v16;
        }
        while ( v11 < (unsigned int)v4 );
      }
      if ( (v6 & v14) != 0 )
        v15 = ((_DWORD)v15 + 63) & 0xFFFFFFC0;
      return &v10[v15 - 512];
    }
    return 0LL;
  }
  v15 = *(unsigned int *)(a3 + 8 * v4 + 24);
  return &v10[v15 - 512];
}
