/*
 * XREFs of _LdrpAccessResourceData@16 @ 0x4B2BD414
 * Callers:
 *     _RtlLoadString@32 @ 0x4B2BA030 (_RtlLoadString@32.c)
 *     _RtlFindMessage@20 @ 0x4B2DFF20 (_RtlFindMessage@20.c)
 *     _LdrAccessResource@16 @ 0x4B308B00 (_LdrAccessResource@16.c)
 * Callees:
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 *     _LdrpGetImageSize@8 @ 0x4B33F62D (_LdrpGetImageSize@8.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __stdcall LdrpAccessResourceData(int a1, unsigned int a2, int a3, int a4)
{
  _DWORD *SharedData; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // [esp+10h] [ebp-10h] BYREF
  unsigned int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h] BYREF
  int ImageSize; // [esp+1Ch] [ebp-4h] BYREF

  v15 = 0;
  v13 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v5 = 2147353477;
  v6 = 2147353476;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476;
    LdrpTraceLoadMUIDll(&dword_4B281BF0, *(unsigned __int8 *)v11);
  }
  if ( !a1 || !a2 )
    return -1073741811;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_DWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((_DWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    goto LABEL_9;
  }
  v14 = a1 & 0xFFFFFFFC;
  v12 = RtlImageDirectoryEntryToData(a1, 1, 2, &ImageSize);
  if ( !v12 )
  {
    v7 = -1073741687;
    goto LABEL_10;
  }
  if ( a2 < v12 )
  {
LABEL_27:
    LdrpGetAlternateResourceModuleHandleEx(a2, &v15);
LABEL_9:
    v7 = LdrpAccessResourceDataNoMultipleLanguage(a3, a4);
    goto LABEL_10;
  }
  ImageSize = LdrpGetImageSize(a1, &v13);
  if ( ImageSize != -1073741701 )
  {
    if ( !v13 || a2 >= v14 && a2 < v13 + v14 )
      goto LABEL_9;
    goto LABEL_27;
  }
  v7 = -1073741701;
LABEL_10:
  v8 = NtCurrentPeb()->SharedData;
  if ( v8 && *v8 )
    v9 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&dword_4B281C00, *(unsigned __int8 *)v6);
  }
  return v7;
}
