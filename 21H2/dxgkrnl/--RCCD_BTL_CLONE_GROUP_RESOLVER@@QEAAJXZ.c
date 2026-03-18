/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01B81F8
 * Callers:
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01B8198 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1C002C8E0 (-IsPathVirtualFlagCloneCompatible@@YAEEE@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(_QWORD *a1)
{
  unsigned int i; // edx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r11d
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rdi
  unsigned __int8 v12; // si
  __int64 v13; // r9
  __int64 v14; // r10

  for ( i = 0; i < *(unsigned __int16 *)(*a1 + 32LL); *(_QWORD *)(v3 + a1[1] + 56) &= 0xFFFF0FFFFFFFFFFFuLL )
    v3 = 296LL * i++;
  Global = DXGGLOBAL_GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_,
             (__int64)a1,
             4LL);
  if ( (_DWORD)result != -2147483622 )
  {
    if ( (_DWORD)result )
      return result;
    return 3221226021LL;
  }
  v6 = 0;
  v7 = *(unsigned __int16 *)(*a1 + 32LL);
  if ( *(_WORD *)(*a1 + 32LL) )
  {
    while ( 1 )
    {
      v8 = 0;
      if ( v6 )
      {
        v9 = a1[1];
        v10 = 296LL * v6;
        while ( *(_DWORD *)(296LL * v8 + v9 + 240) != *(_DWORD *)(v10 + v9 + 240) )
        {
          if ( ++v8 >= v6 )
            goto LABEL_16;
        }
        v11 = 296LL * v8;
        v12 = *(_BYTE *)(v11 + v9 + 185);
        if ( !IsPathVirtualFlagCloneCompatible(v12, *(_BYTE *)(v9 + v10 + 185))
          || !v12
          && (*(_DWORD *)(v11 + v13 + 72) != *(_DWORD *)(v13 + v14 + 72)
           || *(_DWORD *)(v11 + v13 + 76) != *(_DWORD *)(v13 + v14 + 76)) )
        {
          return 3221226021LL;
        }
      }
LABEL_16:
      if ( ++v6 >= v7 )
        return 0LL;
    }
  }
  return 0LL;
}
