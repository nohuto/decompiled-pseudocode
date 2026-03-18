/*
 * XREFs of ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x18002C098
 * Callers:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x18002BF74 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180273C70 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 *     ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1802741D0 (-ResetOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::ResetInteractionOutput @ 0x18002C0C8 (_anonymous_namespace_--ResetInteractionOutput.c)
 */

void __fastcall CInteractionContextWrapper::ResetCachedInteractionOutput(CInteractionContextWrapper *this, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx

  anonymous_namespace_::ResetInteractionOutput((char *)this + 24, a2, this);
  anonymous_namespace_::ResetInteractionOutput(v2 + 88, v3, v2);
  anonymous_namespace_::ResetInteractionOutput(v4 + 152, v5, v4);
}
