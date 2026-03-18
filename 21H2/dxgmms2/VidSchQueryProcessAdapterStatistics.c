/*
 * XREFs of VidSchQueryProcessAdapterStatistics @ 0x1C00F48E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchQueryProcessAdapterStatistics(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  _QWORD **v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  v3 = a3 + 48;
  a3[1] = a1[20];
  a3[2] = a1[10];
  v5 = a2 - (_QWORD)a3;
  v6 = 9LL;
  do
  {
    *v3 = *(_QWORD *)((char *)v3 + v5 + 2488);
    ++v3;
    --v6;
  }
  while ( v6 );
  v7 = *(_QWORD *)(a2 + 8);
  v8 = a1[1];
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v8 >= (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    return 3221225485LL;
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * v8);
  if ( !v10 )
    return 3221225485LL;
  a3[66] = 0;
  v11 = -1LL;
  v12 = (_QWORD **)(v10 + 104);
  v13 = *v12;
  while ( v13 != v12 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    if ( v14[3] > v11 )
    {
      v11 = v14[3];
      a3[66] = *((_DWORD *)v14 + 4);
    }
  }
  return 0LL;
}
