/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x1409486E4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x14041DE80 (ZwPlugPlayControl.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 *a2)
{
  __int64 Pool2; // rax
  __int64 result; // rax
  _DWORD *v6; // rdi
  int v7; // edx
  _DWORD *v8; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v10; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+30h] BYREF

  v14 = 0;
  DestinationString = 0LL;
  Pool2 = ExAllocatePool2(256LL, 84LL, 1198550608LL);
  *a2 = Pool2;
  if ( Pool2 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = (_DWORD *)*a2;
    if ( !*a2 )
      goto LABEL_7;
    v13 = 0LL;
    v11 = 0LL;
    v10 = DestinationString;
    v12 = 0LL;
    v7 = ZwPlugPlayControl(14LL, (__int64)&v10);
    if ( v7 >= 0 )
      *v6 = v12;
    v8 = (_DWORD *)*a2;
    if ( v7 < 0 )
    {
LABEL_7:
      v8 = (_DWORD *)*a2;
      *(_DWORD *)*a2 = 45;
    }
    v15 = 78;
    result = CmGetDeviceRegProp(
               *(__int64 *)&PiPnpRtlCtx,
               (__int64)SourceString,
               0LL,
               9,
               (__int64)&v14,
               (__int64)(v8 + 1),
               (__int64)&v15,
               0);
    if ( (int)result >= 0 && v14 == 1 && v15 > 2 )
    {
      *(_WORD *)(*a2 + 80) = 0;
    }
    else
    {
      *(_WORD *)(*a2 + 4) = 0;
      return 0LL;
    }
  }
  else
  {
    result = 3221225626LL;
    *a2 = 0LL;
  }
  return result;
}
