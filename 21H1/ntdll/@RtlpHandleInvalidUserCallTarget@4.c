/*
 * XREFs of @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 *     _LdrpValidateUserCallTargetBitMapCheck@0 @ 0x4B3085EB (_LdrpValidateUserCallTargetBitMapCheck@0.c)
 *     _LdrpValidateUserCallTargetBitMapCheck1@0 @ 0x4B30868B (_LdrpValidateUserCallTargetBitMapCheck1@0.c)
 * Callees:
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     @RtlFailFast2@8 @ 0x4B308720 (@RtlFailFast2@8.c)
 *     _RtlGuardIsExportSuppressedAddress@4 @ 0x4B363AFE (_RtlGuardIsExportSuppressedAddress@4.c)
 *     _RtlpGuardGrantSuppressedCallAccess@8 @ 0x4B363C51 (_RtlpGuardGrantSuppressedCallAccess@8.c)
 *     _RtlpGuardIsSuppressedAddress@4 @ 0x4B363CAC (_RtlpGuardIsSuppressedAddress@4.c)
 *     _RtlpUnsuppressForwardReferencingCallTarget@4 @ 0x4B363CC9 (_RtlpUnsuppressForwardReferencingCallTarget@4.c)
 */

int __thiscall RtlpHandleInvalidUserCallTarget(void *this)
{
  int result; // eax
  _BYTE v3[28]; // [esp+8h] [ebp-20h] BYREF
  int v4; // [esp+24h] [ebp-4h] BYREF

  if ( ZwQueryInformationProcess(-1, 34, (int)&v4, 4, 0) < 0
    || (result = v4, (v4 & 2) == 0)
    && ((v4 & 5) != 1
     || (result = NtQueryVirtualMemory(-1, (int)this, 0, (int)v3, 28, 0), result < 0)
     || (v3[20] & 0xF0) != 0) )
  {
    if ( RtlGuardAllowSuppressedCalls && (unsigned __int8)RtlpGuardIsSuppressedAddress(this) )
    {
      return RtlpGuardGrantSuppressedCallAccess(this, 1);
    }
    else if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
           || !(unsigned __int8)RtlGuardIsExportSuppressedAddress(this)
           || (result = RtlpUnsuppressForwardReferencingCallTarget(this), result < 0) )
    {
      RtlFailFast2((void *)0xA);
    }
  }
  return result;
}
