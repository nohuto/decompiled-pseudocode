/*
 * XREFs of ?CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z @ 0xCA80C
 * Callers:
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
 *     _xxxClientExpandStringW@4 @ 0xD97D4 (_xxxClientExpandStringW@4.c)
 *     _xxxClientLoadStringW@12 @ 0xD9AD4 (_xxxClientLoadStringW@12.c)
 *     _ClientGetListboxString@36 @ 0x189964 (_ClientGetListboxString@36.c)
 *     _SfnGETDBCSTEXTLENGTHS@32 @ 0x18AAE2 (_SfnGETDBCSTEXTLENGTHS@32.c)
 *     _SfnINCNTOUTSTRING@32 @ 0x18BE0A (_SfnINCNTOUTSTRING@32.c)
 *     _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4 (_SfnINCNTOUTSTRINGNULL@32.c)
 * Callees:
 *     <none>
 */

ULONG __userpurge CalcOutputStringSize@<eax>(
        ULONG a1@<edx>,
        int a2@<ecx>,
        struct _CALLBACKSTATUS *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  SIZE_T v8; // ecx
  ULONG v9; // eax
  ULONG v11; // esi
  ULONG BytesInUnicodeString; // [esp+Ch] [ebp-4h] BYREF

  BytesInUnicodeString = 0;
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
    ProbeForRead(*(volatile void **)(a2 + 8), v8, (a4 == 0) + 1);
  else
    *(_BYTE *)_MmUserProbeAddress = 0;
  v9 = *(_DWORD *)(a2 + 4);
  if ( a3 )
  {
    if ( a4 )
    {
LABEL_6:
      if ( a1 >= v9 )
        return v9;
      return a1;
    }
    v11 = 2 * a1;
    if ( v11 >= v9 )
      v11 = *(_DWORD *)(a2 + 4);
    RtlUnicodeToMultiByteSize(&BytesInUnicodeString, *(PCWCH *)(a2 + 8), v11);
    return BytesInUnicodeString;
  }
  else
  {
    if ( !a4 )
    {
      v9 >>= 1;
      goto LABEL_6;
    }
    if ( a1 >= v9 )
      a1 = *(_DWORD *)(a2 + 4);
    RtlMultiByteToUnicodeSize(&BytesInUnicodeString, *(const CHAR **)(a2 + 8), a1);
    return BytesInUnicodeString >> 1;
  }
}
