/*
 * XREFs of ?CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC8EC4
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

int __userpurge CaptureAnsiCallbackData@<eax>(
        const WCHAR *a1@<edx>,
        int a2@<ecx>,
        ULONG MaxBytesInMultiByteString,
        char *a4,
        unsigned int a5,
        void **a6)
{
  ULONG v7; // ecx
  struct _CAPTUREBUF *v8; // ebx
  ULONG v9; // ecx
  void **v11; // [esp+0h] [ebp-30h]
  unsigned __int8 *v12; // [esp+4h] [ebp-2Ch]
  ULONG BytesInMultiByteString; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  BytesInMultiByteString = 0;
  if ( !a1 )
  {
    *(_DWORD *)a4 = 0;
    return 0;
  }
  v7 = MaxBytesInMultiByteString;
  if ( 2 * MaxBytesInMultiByteString > *(_DWORD *)(a2 + 4) )
    return -2147483643;
  v8 = *(struct _CAPTUREBUF **)(a2 + 12);
  ms_exc.registration.TryLevel = 0;
  if ( (*_gpsi & 2) != 0 )
    v7 = 2 * MaxBytesInMultiByteString;
  if ( RtlUnicodeToMultiByteN((PCHAR)v8, v7, &BytesInMultiByteString, a1, 2 * MaxBytesInMultiByteString) >= 0 )
  {
    ms_exc.registration.TryLevel = -2;
    v9 = BytesInMultiByteString;
    *(_DWORD *)(a2 + 12) = (char *)v8 + ((BytesInMultiByteString + 3) & 0xFFFFFFFC);
    *(_DWORD *)(a2 + 4) -= v9;
    FixupCaptureDataOffsets(a4, (struct _CAPTUREBUF *)a2, v8, v11, v12);
    return 0;
  }
  return -1073741823;
}
