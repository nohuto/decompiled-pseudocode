/*
 * XREFs of ??$GetActivationFactory@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800B7EB8
 * Callers:
 *     ??$ActivationFactoryCallback@$01@Details@WRL@Microsoft@@YAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800B7EA0 (--$ActivationFactoryCallback@$01@Details@WRL@Microsoft@@YAJPEAUHSTRING__@@PEAPEAUIActivationFact.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800B9760 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<2>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        HSTRING a3,
        const struct Microsoft::WRL::Details::CreatorMap *a4)
{
  PCWSTR StringRawBuffer; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned int *v12; // r8
  int v13; // edx
  unsigned int v14; // ebx
  const struct _GUID *v15; // r9
  struct IUnknown **v17; // [rsp+28h] [rbp-70h]
  BOOL hasEmbedNull; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+34h] [rbp-64h] BYREF
  _OWORD v20[2]; // [rsp+38h] [rbp-60h] BYREF
  int v21; // [rsp+58h] [rbp-40h]
  wchar_t v22; // [rsp+5Ch] [rbp-3Ch]

  *(_QWORD *)a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v21 = *(_DWORD *)L"Id";
    v14 = -2147024809;
    v22 = aActivatiblecla[18];
    v20[0] = *(_OWORD *)L"activatibleClassId";
    v20[1] = *(_OWORD *)L"bleClassId";
    RoOriginateErrorW(2147942487LL, 18LL, v20);
    return v14;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v8 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this) + 8;
  v9 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  if ( v8 >= v9 )
  {
LABEL_11:
    v14 = -2147221231;
    RoOriginateError(2147746065LL, a3);
    return v14;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)v8 )
    {
      v10 = (*(__int64 (**)(void))(*(_QWORD *)v8 + 8LL))() - (_QWORD)StringRawBuffer;
      v11 = (unsigned __int16 *)StringRawBuffer;
      do
      {
        v12 = (unsigned int *)*(unsigned __int16 *)((char *)v11 + v10);
        v13 = *v11 - (_DWORD)v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( (_DWORD)v12 );
      if ( !v13 )
        break;
    }
    v8 += 8LL;
    if ( v8 >= v9 )
      goto LABEL_11;
  }
  v15 = *(const struct _GUID **)v8;
  v19 = 2;
  return Microsoft::WRL::Details::GetCacheEntry(
           this,
           (struct Microsoft::WRL::Details::ModuleBase *)&v19,
           v12,
           v15,
           a4,
           v17);
}
