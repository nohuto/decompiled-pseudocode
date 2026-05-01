/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x180033530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 */

int __fastcall PsmMemoryLimitNotification2(void *Src, int a2, char **a3, int a4, void *a5)
{
  DWORD v5; // ebx
  int v10; // ebx
  ULONG v11; // eax
  int result; // eax
  DWORD v13; // ebx
  _BYTE v14[80]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-B8h] BYREF

  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v5 = dwTlsIndex;
  }
  memset(TlsValue, 0, 0x88uLL);
  if ( v5 != -1 )
  {
    if ( TlsGetValue(v5) )
      __int2c();
    TlsSetValue(v5, TlsValue);
  }
  v10 = 1;
LABEL_9:
  memset(v14, 0, 0x44uLL);
  v11 = RtlLengthSid(Src);
  memcpy(v14, Src, v11);
  result = sub_180031B00(*(_QWORD *)(*(_QWORD *)&qword_1800B41A8 + 40LL), (__int64)v14, a2, a3, a4, a5);
  if ( v10 )
  {
    v13 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      return TlsSetValue(v13, 0LL);
    }
  }
  return result;
}
