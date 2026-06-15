/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000DE00
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D610 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140010998 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14001548C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x14001869C (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14002199C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14003B7CC (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x14004794C (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x14005073C (-GetApoRegKeyPath@@YAJPEAGIPEBG@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x14001DF84 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned int v3; // edi
  int v5; // r9d
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 result; // rax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = 0;
  v5 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    result = (unsigned int)v5;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v6 = a2 - 1;
    v7 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      a1[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      a1[v6] = 0;
    }
    return v3;
  }
  return result;
}
