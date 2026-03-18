/*
 * XREFs of ?CheckForSegmentedSignatureBlob@@YGJPAXGPAU_HIDP_VALUE_CAPS@@PAG@Z @ 0x156C3E
 * Callers:
 *     _ValidateDeviceSignature@36 @ 0x15991D (_ValidateDeviceSignature@36.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge CheckForSegmentedSignatureBlob@<eax>(
        USHORT a1@<dx>,
        struct _HIDP_PREPARSED_DATA *a2@<ecx>,
        PHIDP_VALUE_CAPS ValueCaps,
        USHORT *a4,
        struct _HIDP_VALUE_CAPS *a5,
        unsigned __int16 *a6)
{
  int v6; // esi
  int v7; // ebx
  USHORT v8; // dx
  USHORT *v9; // ecx
  USHORT *p_ReportCount; // eax
  USHORT v11; // di
  NTSTATUS v12; // ecx
  NTSTATUS v14; // [esp+Ch] [ebp-8h]
  USHORT ValueCapsLength; // [esp+10h] [ebp-4h] BYREF

  v6 = 0;
  ValueCapsLength = a1;
  v7 = 0;
  v14 = HidP_GetValueCaps(HidP_Feature, ValueCaps, &ValueCapsLength, a2);
  if ( v14 < 0 )
    return -1073741668;
  v8 = 0;
  if ( !ValueCapsLength )
    return -1073741668;
  v9 = a4;
  p_ReportCount = &ValueCaps->ReportCount;
  do
  {
    v11 = p_ReportCount[18];
    if ( v11 == 198 )
    {
      v9 = a4;
      if ( *p_ReportCount != 1 )
        goto LABEL_14;
      v9 = a4;
      if ( *(p_ReportCount - 1) != 8 )
        goto LABEL_14;
      v9 = a4;
      if ( *(p_ReportCount - 10) < 0xFF00u )
        goto LABEL_14;
      v6 = 1;
    }
    if ( v11 == 199 && *p_ReportCount == 32 && *(p_ReportCount - 1) == 8 && *(p_ReportCount - 10) >= 0xFF00u )
    {
      *v9 = v8;
      v7 = 1;
    }
LABEL_14:
    ++v8;
    p_ReportCount += 36;
  }
  while ( v8 < ValueCapsLength );
  v12 = v14;
  if ( !v7 || !v6 )
    return -1073741668;
  return v12;
}
