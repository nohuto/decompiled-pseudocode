/*
 * XREFs of ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C03019D8
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C0301930 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C0025ED4 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

void wil_details_UpdateFeatureConfiguredStates(void)
{
  const unsigned __int64 *i; // rcx
  __int64 v1; // rcx
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  const struct wil_details_FeatureDescriptor *v5; // rax
  volatile signed __int32 **v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; ; i = (const unsigned __int64 *)(v6 + 6) )
  {
    v5 = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = (volatile signed __int32 **)v5;
    if ( !v5 )
      break;
    if ( !*((_BYTE *)v5 + 21) && !*((_BYTE *)v5 + 22) && !*((_BYTE *)v5 + 20) )
    {
      v1 = *((unsigned int *)v5 + 4);
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0;
      v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
             v1,
             1LL,
             &v7,
             &v8);
      if ( v2 == -2147483614 || v2 == -1073741275 )
        goto LABEL_12;
      if ( v2 )
      {
        if ( v2 == 279 )
        {
          v3 = BYTE4(v8) & 0x80;
          goto LABEL_11;
        }
LABEL_12:
        v4 = 131;
      }
      else
      {
        v3 = BYTE4(v8) & 0xB0 | (4 * (BYTE4(v8) & 0x40));
LABEL_11:
        v4 = (2 * v3) | 0x83;
      }
      _InterlockedXor(*v6, ((unsigned __int16)**v6 ^ (unsigned __int16)v4) & 0x3E0);
      continue;
    }
  }
}
