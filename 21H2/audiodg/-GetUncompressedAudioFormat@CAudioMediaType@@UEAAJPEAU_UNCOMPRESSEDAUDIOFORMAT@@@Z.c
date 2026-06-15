/*
 * XREFs of ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::GetUncompressedAudioFormat(
        CAudioMediaType *this,
        struct _UNCOMPRESSEDAUDIOFORMAT *a2)
{
  __int64 v2; // r8
  DWORD v3; // eax
  float v4; // xmm1_4

  if ( !a2 )
    return 2147500035LL;
  v2 = *((_QWORD *)this + 2);
  if ( !v2 )
    return 2147500035LL;
  if ( *(_WORD *)v2 == 0xFFFE )
  {
    a2->guidFormatType = *(GUID *)(v2 + 24);
    a2->dwSamplesPerFrame = *(unsigned __int16 *)(v2 + 2);
    a2->dwBytesPerSampleContainer = *(unsigned __int16 *)(v2 + 14) >> 3;
    a2->dwValidBitsPerSample = *(unsigned __int16 *)(v2 + 18);
    a2->fFramesPerSecond = (float)*(int *)(v2 + 4);
    v3 = *(_DWORD *)(v2 + 20);
  }
  else
  {
    a2->guidFormatType = GUID_00000000_0000_0010_8000_00aa00389b71;
    a2->guidFormatType.Data1 = **((unsigned __int16 **)this + 2);
    a2->dwSamplesPerFrame = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 2LL);
    a2->dwBytesPerSampleContainer = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 14LL) >> 3;
    a2->dwValidBitsPerSample = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 14LL);
    v3 = 0;
    a2->fFramesPerSecond = (float)*(int *)(*((_QWORD *)this + 2) + 4LL);
  }
  a2->dwChannelMask = v3;
  v4 = *((float *)this + 6);
  if ( v4 != 0.0 )
    a2->fFramesPerSecond = v4;
  return 0LL;
}
