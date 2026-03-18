/*
 * XREFs of ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356
 * Callers:
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
 *     _xxxClientLoadStringW@12 @ 0xD9AD4 (_xxxClientLoadStringW@12.c)
 *     _ClientGetListboxString@36 @ 0x189964 (_ClientGetListboxString@36.c)
 *     _SfnGETDBCSTEXTLENGTHS@32 @ 0x18AAE2 (_SfnGETDBCSTEXTLENGTHS@32.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 *     _SfnINCNTOUTSTRING@32 @ 0x18BE0A (_SfnINCNTOUTSTRING@32.c)
 *     _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4 (_SfnINCNTOUTSTRINGNULL@32.c)
 *     _SfnPOUTLPINT@32 @ 0x191E47 (_SfnPOUTLPINT@32.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YGXPAU_CAPTUREBUF@@PAPAXPAE@Z @ 0x9E38A (-FixupCaptureDataOffsets@@YGXPAU_CAPTUREBUF@@PAPAXPAE@Z.c)
 */

int __userpurge AllocateCallbackData@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct _CAPTUREBUF *a3,
        unsigned int a4,
        void **a5)
{
  struct _CAPTUREBUF *v6; // [esp-4h] [ebp-8h]
  void **v7; // [esp+0h] [ebp-4h]
  unsigned __int8 *savedregs; // [esp+4h] [ebp+0h]

  if ( a1 > *(_DWORD *)(a2 + 4) )
    return -2147483643;
  v6 = *(struct _CAPTUREBUF **)(a2 + 12);
  *(_DWORD *)(a2 + 12) = (char *)v6 + ((a1 + 3) & 0xFFFFFFFC);
  FixupCaptureDataOffsets(v6, v7, savedregs);
  return 0;
}
