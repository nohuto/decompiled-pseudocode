/*
 * XREFs of ?CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC466E
 * Callers:
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _SfnINSTRINGNULL@32 @ 0xA436C (_SfnINSTRINGNULL@32.c)
 *     _fnHkINLPCBTCREATESTRUCT@20 @ 0xC8910 (_fnHkINLPCBTCREATESTRUCT@20.c)
 *     _SfnINLPMDICREATESTRUCT@32 @ 0x18DE71 (_SfnINLPMDICREATESTRUCT@32.c)
 *     _SfnINSTRING@32 @ 0x19002A (_SfnINSTRING@32.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YGXPAU_CAPTUREBUF@@PAPAXPAE@Z @ 0x9E38A (-FixupCaptureDataOffsets@@YGXPAU_CAPTUREBUF@@PAPAXPAE@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __userpurge CaptureUnicodeCallbackData@<eax>(
        const CHAR *a1@<edx>,
        int a2@<ecx>,
        ULONG MaxBytesInUnicodeString,
        char *a4,
        unsigned int a5,
        void **a6)
{
  struct _CAPTUREBUF *v7; // ebx
  void **v9; // [esp+0h] [ebp-30h]
  unsigned __int8 *v10; // [esp+4h] [ebp-2Ch]
  ULONG BytesInUnicodeString; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  BytesInUnicodeString = 0;
  if ( !a1 )
  {
    *(_DWORD *)a4 = 0;
    return 0;
  }
  if ( MaxBytesInUnicodeString > *(_DWORD *)(a2 + 4) )
    return -2147483643;
  v7 = *(struct _CAPTUREBUF **)(a2 + 12);
  ms_exc.registration.TryLevel = 0;
  if ( RtlMultiByteToUnicodeN(
         (PWCH)v7,
         MaxBytesInUnicodeString,
         &BytesInUnicodeString,
         a1,
         MaxBytesInUnicodeString >> 1) >= 0 )
  {
    ms_exc.registration.TryLevel = -2;
    *(_DWORD *)(a2 + 12) = (char *)v7 + ((MaxBytesInUnicodeString + 3) & 0xFFFFFFFC);
    *(_DWORD *)(a2 + 4) -= MaxBytesInUnicodeString;
    FixupCaptureDataOffsets(a4, (struct _CAPTUREBUF *)a2, v7, v9, v10);
    return 0;
  }
  return -1073741823;
}
