/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180393094
 * Callers:
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb__&_void___&_ @ 0x180392CAC (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58b.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f_____lambda_775801dc926fad4e7766c846adb2ec1f__&_void___&_ @ 0x18039FCF8 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_8cb41962f400b05f8d5f37a54afbb5b2_____lambda_8cb41962f400b05f8d5f37a54afbb5b2__&_void___&_ @ 0x1803ADBB4 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_8cb41962f400b05f8d5f37a54afbb5b.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5_____lambda_3d6638088535fad8bc54773006e1fbb5__&_void___&_ @ 0x1803B5610 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18037D0A0 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

IApplicationViewChangeListener *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>(
        IApplicationViewChangeListener *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
