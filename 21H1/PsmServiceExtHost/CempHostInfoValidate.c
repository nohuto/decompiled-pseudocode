/*
 * XREFs of CempHostInfoValidate @ 0x18000F780
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18000F830 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800359C8 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempHostInfoValidate(__int64 a1, void *a2, unsigned int a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v8; // ebx
  unsigned int v9; // eax

  v8 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a1) )
  {
    if ( a3 >= 0xC && RtlValidSid(a2) && RtlLengthSid(a2) == a3 )
    {
      if ( !a5 )
        return (unsigned int)-1073741581;
      if ( ((a5 - 1) & a5) != 0 )
        return (unsigned int)-1073741581;
      _BitScanForward(&v9, a5);
      if ( v9 >= 4 )
      {
        return (unsigned int)-1073741581;
      }
      else if ( a6 == -1 )
      {
        return (unsigned int)-1073741580;
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v8;
}
