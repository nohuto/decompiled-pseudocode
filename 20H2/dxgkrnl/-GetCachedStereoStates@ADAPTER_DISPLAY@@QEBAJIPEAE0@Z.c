/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00DC758
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DC1F4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(ADAPTER_DISPLAY *this, __int64 a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v13; // rax
  _QWORD *v14; // rax

  v4 = (unsigned int)a2;
  if ( !a3 || !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 6205LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a3 && a4 && (unsigned int)v4 < *((_DWORD *)this + 20) )
  {
    v8 = *((_QWORD *)this + 14);
    v9 = -1073741275;
    v10 = 3968 * v4;
    v11 = *(_DWORD *)(v8 + 3968 * v4 + 1104);
    if ( v11 != -1 && *(_DWORD *)(v8 + v10 + 1108) != -1 )
    {
      *a3 = v11 == 1;
      v9 = 0;
      *a4 = *(_DWORD *)(*((_QWORD *)this + 14) + v10 + 1108) == 1;
    }
    return v9;
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v14[4] = a4;
    v14[3] = a3;
    v14[5] = v4;
    v14[6] = *((unsigned int *)this + 20);
    v14[7] = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
