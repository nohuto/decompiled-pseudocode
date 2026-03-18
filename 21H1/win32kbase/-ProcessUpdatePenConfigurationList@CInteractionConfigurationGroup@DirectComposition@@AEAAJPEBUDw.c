/*
 * XREFs of ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00959A0
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0095B5C (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 * Callees:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C009542C (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdatePenConfigurationList(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v6; // rcx
  int v8; // r8d
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  v6 = (unsigned int)a2[2];
  v8 = a2[3];
  if ( a2[1] > (unsigned int)v6 )
    return 3221225485LL;
  v10[0] = a2[1];
  v10[1] = v6;
  v10[2] = v8;
  result = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
             v6,
             a3,
             (__int64)v10,
             a1 + 64,
             a4);
  if ( (int)result >= 0 && *a4 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 12) |= 2u;
  }
  return result;
}
