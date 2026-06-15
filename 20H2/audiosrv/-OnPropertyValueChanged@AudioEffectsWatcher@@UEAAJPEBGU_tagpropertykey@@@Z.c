/*
 * XREFs of ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800C54C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800C4EE4 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D714C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::OnPropertyValueChanged(
        AudioEffectsWatcher *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  const struct _tagpropertykey *v6; // rdx
  LONG lVal; // ebx
  void *v8; // rcx
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+58h] [rbp-20h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v11 = *(_OWORD *)((char *)this + 8);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  if ( CompareStringOrdinal(a2, -1, *((LPCWCH *)this + 3), -1, 1) == 2 )
  {
    lVal = 0;
    if ( (unsigned int)operator==((__int64)a3, (__int64)&PKEY_AudioEndpoint_Disable_SysFx) )
    {
      if ( CPolicyConfig::GetPropertyStoreProperty(*((const unsigned __int16 **)this + 3), 1, v6, &pvar) >= 0
        && pvar.vt == 19 )
      {
        lVal = pvar.lVal;
      }
      if ( lVal != *((_DWORD *)this + 17) )
      {
        v8 = (void *)*((_QWORD *)this + 25);
        *((_DWORD *)this + 17) = lVal;
        SetEvent(v8);
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  EtwEventActivityIdControl(4LL, &v12);
  return 0LL;
}
