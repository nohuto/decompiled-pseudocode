/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01374E8
 * Callers:
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0137594 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C0133D8C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  char v11; // al

  v1 = (_QWORD *)a1;
  v2 = 0LL;
  if ( *(_WORD *)(*(_QWORD *)a1 + 32LL) )
  {
    do
    {
      v3 = 272LL * (unsigned int)v2;
      v2 = (unsigned int)(v2 + 1);
      *(_QWORD *)(v3 + v1[1] + 48) &= 0xFFFF0FFFFFFFFFFFuLL;
      a1 = *(unsigned __int16 *)(*v1 + 32LL);
    }
    while ( (unsigned int)v2 < (unsigned int)a1 );
  }
  Global = DXGGLOBAL::GetGlobal(a1, v2);
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_,
             (__int64)v1,
             4);
  if ( (_DWORD)result == -2147483622 )
  {
    v6 = 0;
    if ( !*(_WORD *)(*v1 + 32LL) )
      return 0LL;
    while ( 1 )
    {
      v7 = 0;
      if ( v6 )
      {
        v8 = v1[1];
        v9 = 272LL * v6;
        do
        {
          if ( *(_DWORD *)(272LL * v7 + v8 + 232) == *(_DWORD *)(v9 + v8 + 232) )
            break;
          ++v7;
        }
        while ( v7 < v6 );
        if ( v7 < v6 )
        {
          v10 = 272LL * v7;
          v11 = *(_BYTE *)(v10 + v8 + 177);
          if ( v11 != *(_BYTE *)(v8 + v9 + 177)
            || !v11
            && (*(_DWORD *)(v10 + v8 + 64) != *(_DWORD *)(v8 + v9 + 64)
             || *(_DWORD *)(v10 + v8 + 68) != *(_DWORD *)(v8 + v9 + 68)) )
          {
            break;
          }
        }
      }
      if ( ++v6 >= *(unsigned __int16 *)(*v1 + 32LL) )
        return 0LL;
    }
    return 3221226021LL;
  }
  if ( !(_DWORD)result )
    return 3221226021LL;
  return result;
}
