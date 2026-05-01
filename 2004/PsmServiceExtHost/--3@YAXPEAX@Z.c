/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1800448CC
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180002120 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x1800101C0 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x1800111C0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x180014660 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800315F0 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x180037190 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x18003C600 (--_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800460A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180062F40 (--_EResourceManagerServerProxy@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceSetCallback@@UEAAKXZ @ 0x180063310 (-Release@ResourceSetCallback@@UEAAKXZ.c)
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180063560 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x180063598 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??_E?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180064470 (--_E-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UE.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x1800674E0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180073C30 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180076EC0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180076EF0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
