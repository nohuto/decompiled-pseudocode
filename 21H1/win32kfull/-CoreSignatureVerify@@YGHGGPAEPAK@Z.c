/*
 * XREFs of ?CoreSignatureVerify@@YGHGGPAEPAK@Z @ 0x156D0B
 * Callers:
 *     ?RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPAK@Z @ 0x1579FA (-RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HI.c)
 * Callees:
 *     __VerifyTHQBlob@16 @ 0x1449FD (__VerifyTHQBlob@16.c)
 */

BOOL __userpurge CoreSignatureVerify@<eax>(
        __int16 a1@<dx>,
        __int16 a2@<cx>,
        UCHAR *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        unsigned int *a6)
{
  BOOL v8; // esi

  v8 = _VerifyTHQBlob(a2, a1, a3, (UCHAR *)gTHQAPublicKey);
  if ( v8 )
  {
    *a4 = 1;
  }
  else
  {
    v8 = _VerifyTHQBlob(a2, a1, a3, (UCHAR *)gTHQAExceptionPublicKey);
    *a4 = v8 ? 2 : 0;
  }
  return v8;
}
