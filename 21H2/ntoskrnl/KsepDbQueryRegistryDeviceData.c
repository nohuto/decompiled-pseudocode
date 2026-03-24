/*
 * XREFs of KsepDbQueryRegistryDeviceData @ 0x14075F89C
 * Callers:
 *     KseQueryDeviceData @ 0x14075F420 (KseQueryDeviceData.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     KsepRegistryOpenKey @ 0x14075B464 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14075B800 (KsepStringFree.c)
 *     KsepStringTransform @ 0x14075F938 (KsepStringTransform.c)
 *     KsepRegistryQueryValue @ 0x1408C15CC (KsepRegistryQueryValue.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  Value = KsepStringTransform(&v11, a1);
  if ( Value >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v12,
                &Handle) < 0
      || (v10 = (unsigned int)*a4,
          Value = KsepRegistryQueryValue(Handle, a2, v10, (__int64)&v10),
          *a4 = v10,
          Value == -1073741772) )
    {
      Value = -1073741275;
    }
    else if ( Value >= 0 )
    {
      Value = 0;
      *a3 |= 0x10000000u;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(&dword_140C2AA3C);
    }
  }
  KsepStringFree((__int64)&v11);
  return (unsigned int)Value;
}
