/*
 * XREFs of ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013E6C
 * Callers:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800109CC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18005DF64 (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180060BC0 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1801BC0B8 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020EAB0 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180211160 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax

  v2 = a1 + 56;
  *(_QWORD *)a1 = &wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  v4 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(v2 + 48) = a2;
  *(_DWORD *)v2 = 0;
  *(_BYTE *)(v2 + 4) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 1LL;
  v4[18] = 0LL;
  v4[19] = 0LL;
  memset_0(v4, 0, 0x90uLL);
  *(_QWORD *)(v2 + 240) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  return result;
}
