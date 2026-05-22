/*
 * XREFs of wil::details::lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___::_lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___ @ 0x1800CE4D4
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization_::_1_::dtor$1 @ 0x1800D024F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D024F.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D2AA0 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___::_lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___(
        unsigned int **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
             a1[1],
             **a1);
  }
  return result;
}
