/*
 * XREFs of ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1800E2300
 * Callers:
 *     ?FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x1800DFBE0 (-FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCS.c)
 *     ?FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x18016C780 (-FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(wchar_t *a1, __int64 a2, const wchar_t *a3, unsigned __int64 a4)
{
  __int64 result; // rax
  signed __int64 v5; // r10
  __int64 v6; // r8
  wchar_t v7; // ax
  wchar_t *v8; // rax

  if ( a4 <= 0x7FFFFFFE )
  {
    v5 = (char *)a3 - (char *)a1;
    v6 = 200LL;
    do
    {
      if ( !(v6 + a4 - 200) )
        break;
      v7 = *(wchar_t *)((char *)a1 + v5);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v6;
    }
    while ( v6 );
    v8 = a1 - 1;
    if ( v6 )
      v8 = a1;
    *v8 = 0;
    return v6 == 0 ? 0x8007007A : 0;
  }
  else
  {
    result = 2147942487LL;
    *a1 = 0;
  }
  return result;
}
