/*
 * XREFs of PsmHostStateNotification2 @ 0x18000B680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7C0 @ 0x18000B7C0 (sub_18000B7C0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180031588 @ 0x180031588 (sub_180031588.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800622C8 @ 0x1800622C8 (sub_1800622C8.c)
 */

int __fastcall PsmHostStateNotification2(void *Src, int a2, __int64 a3, void *a4, __int64 *a5, int a6, int a7, int a8)
{
  int v9; // r14d
  int v12; // ebx
  ULONG v13; // eax
  int result; // eax
  DWORD v15; // ebx
  _DWORD *v16; // [rsp+38h] [rbp-C8h]
  _DWORD v17[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h]
  void *v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  int v21[20]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE TlsValue[144]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = a3;
  v12 = 1;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v18 = *a5;
    v17[0] = a6;
    v16 = v17;
    v17[1] = a2;
    v19 = Src;
    v20 = a3;
    sub_1800622C8(Src, &unk_18009A4D1);
  }
  if ( (unsigned int)sub_18000B7C0() )
    v12 = 0;
  else
    sub_18000B7F8(TlsValue);
  memset(v21, 0, 0x44uLL);
  v13 = RtlLengthSid(Src);
  memcpy(v21, Src, v13);
  result = sub_180031588(*(_QWORD *)(*(_QWORD *)&qword_1800B41A8 + 40LL), (int)v21, a2, v9, a4, a5, a6, (int)v16, a8);
  if ( v12 )
  {
    v15 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      return TlsSetValue(v15, 0LL);
    }
  }
  return result;
}
