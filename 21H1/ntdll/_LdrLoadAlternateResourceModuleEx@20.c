/*
 * XREFs of _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5 (_LdrMapAndVerifyResourceFile@36.c)
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _LdrpGetFileDriverStoreRoot@12 @ 0x4B2E7D5F (_LdrpGetFileDriverStoreRoot@12.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpLogMapAndVerifyResourceFileFailure@20 @ 0x4B330851 (_LdrpLogMapAndVerifyResourceFileFailure@20.c)
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 *     _LdrpGetModuleInfoFromVirtualMemory@28 @ 0x4B33F74C (_LdrpGetModuleInfoFromVirtualMemory@28.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __stdcall LdrLoadAlternateResourceModuleEx(int a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4, int a5)
{
  wchar_t *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v10; // edi
  int DataModulePath; // eax
  int appended; // esi
  wchar_t *v13; // eax
  int v14; // esi
  int v15; // esi
  unsigned __int16 *v16; // eax
  wchar_t *v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // al
  int v21; // eax
  struct _TEB *v22; // eax
  int WowTebOffset; // ecx
  void *v24; // esi
  struct _TEB *v25; // eax
  int v26; // ecx
  struct _TEB *v27; // eax
  int v28; // ecx
  wchar_t *Heap; // eax
  unsigned __int16 *i; // eax
  int v31; // eax
  int v32; // eax
  _DWORD v33[9]; // [esp+10h] [ebp-B14h] BYREF
  _BYTE v34[8]; // [esp+34h] [ebp-AF0h] BYREF
  _DWORD v35[2]; // [esp+3Ch] [ebp-AE8h] BYREF
  UNICODE_STRING v36; // [esp+44h] [ebp-AE0h] BYREF
  int v37; // [esp+50h] [ebp-AD4h]
  int v38; // [esp+54h] [ebp-AD0h]
  int *v39; // [esp+5Ch] [ebp-AC8h] BYREF
  int v40; // [esp+60h] [ebp-AC4h] BYREF
  size_t v41; // [esp+64h] [ebp-AC0h] BYREF
  wchar_t *v42; // [esp+68h] [ebp-ABCh] BYREF
  unsigned int v43; // [esp+6Ch] [ebp-AB8h] BYREF
  _DWORD *v44; // [esp+70h] [ebp-AB4h]
  wchar_t *v45; // [esp+74h] [ebp-AB0h]
  wchar_t *v46; // [esp+78h] [ebp-AACh] BYREF
  int v47; // [esp+7Ch] [ebp-AA8h]
  UNICODE_STRING DestinationString; // [esp+80h] [ebp-AA4h] BYREF
  wchar_t *v49; // [esp+88h] [ebp-A9Ch]
  _DWORD *v50; // [esp+8Ch] [ebp-A98h]
  HANDLE v51; // [esp+90h] [ebp-A94h] BYREF
  wchar_t *Str; // [esp+94h] [ebp-A90h] BYREF
  unsigned int v53; // [esp+98h] [ebp-A8Ch] BYREF
  UNICODE_STRING v54; // [esp+9Ch] [ebp-A88h] BYREF
  int v55; // [esp+A4h] [ebp-A80h] BYREF
  int v56; // [esp+A8h] [ebp-A7Ch]
  int v57; // [esp+B0h] [ebp-A74h] BYREF
  int v58; // [esp+B4h] [ebp-A70h] BYREF
  int v59; // [esp+B8h] [ebp-A6Ch]
  int v60; // [esp+BCh] [ebp-A68h] BYREF
  unsigned __int16 *v61; // [esp+C0h] [ebp-A64h]
  char v62; // [esp+C6h] [ebp-A5Eh]
  char v63; // [esp+C7h] [ebp-A5Dh]
  int OverlayFilePath; // [esp+C8h] [ebp-A5Ch]
  int v65; // [esp+CCh] [ebp-A58h] BYREF
  _WORD *v66; // [esp+D0h] [ebp-A54h]
  _WORD v67[128]; // [esp+D4h] [ebp-A50h] BYREF
  wchar_t v68[352]; // [esp+1D4h] [ebp-950h] BYREF
  char v69; // [esp+494h] [ebp-690h] BYREF
  unsigned __int16 v70[354]; // [esp+544h] [ebp-5E0h] BYREF
  _BYTE v71[60]; // [esp+808h] [ebp-31Ch] BYREF
  unsigned __int16 Src[356]; // [esp+844h] [ebp-2E0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B0Ch] [ebp-18h]

  v59 = a1;
  v47 = a2;
  v50 = a3;
  v44 = a4;
  v51 = 0;
  v41 = 0;
  v5 = 0;
  Str = 0;
  v53 = 0;
  v45 = 0;
  v57 = 0;
  v39 = 0;
  v62 = 0;
  v33[0] = 36;
  v33[1] = 1;
  memset(&v33[2], 0, 0x1Cu);
  LOBYTE(v55) = 0;
  v40 = 0;
  v46 = 0;
  v63 = 1;
  v42 = 0;
  v49 = v68;
  v43 = 702;
  v38 = 1;
  v56 = 1;
  if ( !a1 )
    return -1073741811;
  if ( !(_WORD)v47 )
    return -1073741811;
  v6 = v50;
  if ( !v50 )
    return -1073741811;
  v7 = LdrpGetFromMUIMemCache(&v57, 4);
  if ( v7 == -1 )
  {
    v10 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v50 = 0;
      return -1073020922;
    }
  }
  else
  {
    if ( v7 )
    {
      ms_exc.registration.TryLevel = 0;
      *v6 = v7;
      if ( v44 )
        *v44 = v57;
      OverlayFilePath = 0;
      ms_exc.registration.TryLevel = -2;
      return 0;
    }
    v10 = a5 & 0x400000;
  }
  v37 = v10;
  v58 = 0;
  if ( v10 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v59, Src, v8, &v41, &Str, &v53, &v42);
    v5 = Str;
  }
  if ( DataModulePath >= 0 )
  {
LABEL_13:
    if ( (v41 & 0xFFFFFFFE) >= 0x2BE )
      __report_rangecheckfailure();
    *(unsigned __int16 *)((char *)Src + (v41 & 0xFFFFFFFE)) = 0;
    if ( wcsrchr(v5, 0x7Eu) && LdrpCnvrtShortToLongFileName(Src, (int)&v40) >= 0 )
    {
      v5 = (wchar_t *)v40;
      Str = (wchar_t *)v40;
      v53 = 2 * wcslen((const unsigned __int16 *)v40);
    }
    RtlInitUnicodeString(&DestinationString, 0);
    RtlInitUnicodeString(&v54, 0);
    v35[1] = v70;
    v35[0] = 46006272;
    v36.Buffer = 0;
    *(_DWORD *)&v36.Length = 0;
    if ( v53 + 12 > 0x3C )
    {
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, 2 * v53 + 10);
      v45 = Heap;
      if ( !Heap )
      {
        appended = -1073741801;
        goto LABEL_120;
      }
      DestinationString.Buffer = Heap;
      DestinationString.MaximumLength = 2 * v53 + 10;
      v5 = Str;
    }
    else
    {
      DestinationString.Buffer = (wchar_t *)v71;
      DestinationString.MaximumLength = 60;
    }
    DestinationString.Length = 0;
    appended = RtlAppendUnicodeToString((int)&DestinationString, v5);
    OverlayFilePath = appended;
    if ( appended < 0 )
      goto LABEL_42;
    v13 = L".mun";
    if ( (a5 & 0x1000000) == 0 )
      v13 = L".mui";
    appended = RtlAppendUnicodeToString((int)&DestinationString, v13);
    OverlayFilePath = appended;
    if ( appended < 0 )
      goto LABEL_42;
    if ( v42 )
      RtlActivateActivationContextUnsafeFast(v33, v42);
    ms_exc.registration.TryLevel = 1;
    OverlayFilePath = appended;
    v14 = LdrpQuerySxSMUIFile((int)&DestinationString, v47, (int)v35, &v36, (int)&v39);
    OverlayFilePath = v14;
    ms_exc.registration.TryLevel = -2;
    if ( v42 )
      RtlDeactivateActivationContextUnsafeFast(v33);
    if ( v14 >= 0 )
    {
      v62 = 1;
      v61 = (unsigned __int16 *)v39[1];
      v60 = *v39;
    }
    if ( v62 )
    {
      v54.Buffer = 0;
      v18 = 0;
      v56 = 0;
LABEL_37:
      v19 = LdrMapAndVerifyResourceFile(v59, (int)&v60, v55, a5, v54.Buffer, v18, &v51, &v57, &v58);
      appended = v19;
      OverlayFilePath = v19;
      if ( v19 == -1073741772 || v19 == -1073741766 )
      {
        v66 = v67;
        v65 = 0x1000000;
        v67[0] = 0;
        if ( LdrpAppendUnicodeStringToFilenameBuffer(&v65, &v60) >= 0 )
        {
          LdrStandardizeSystemPath(&v65);
          v22 = NtCurrentTeb();
          WowTebOffset = v22->WowTebOffset;
          if ( WowTebOffset < 0 )
            v22 = (struct _TEB *)((char *)v22 + WowTebOffset);
          if ( v22 == (struct _TEB *)v22->NtTib.Self )
            v24 = v22->TlsSlots[8];
          else
            v24 = (void *)v22[1].GdiTebBatch.Buffer[185];
          v25 = NtCurrentTeb();
          v26 = v25->WowTebOffset;
          if ( v26 < 0 )
            v25 = (struct _TEB *)((char *)v25 + v26);
          if ( v25 == (struct _TEB *)v25->NtTib.Self )
          {
            v25->TlsSlots[8] = (void *)1;
          }
          else
          {
            v25[1].GdiTebBatch.Buffer[185] = 1;
            v25[1].GdiTebBatch.Buffer[186] = 0;
          }
          OverlayFilePath = LdrMapAndVerifyResourceFile(v59, (int)&v65, v55, a5, v54.Buffer, v56, &v51, &v57, &v58);
          v27 = NtCurrentTeb();
          v28 = v27->WowTebOffset;
          if ( v28 < 0 )
            v27 = (struct _TEB *)((char *)v27 + v28);
          if ( v27 == (struct _TEB *)v27->NtTib.Self )
          {
            v27->TlsSlots[8] = v24;
          }
          else
          {
            v27[1].GdiTebBatch.Buffer[185] = (unsigned int)v24;
            v27[1].GdiTebBatch.Buffer[186] = 0;
          }
          appended = OverlayFilePath;
        }
        if ( v67 != v66 )
          RtlDeleteBoundaryDescriptor((int)v66);
      }
      if ( (a5 & 0x1000000) != 0
        || appended != -1073741766 && appended != -1073741772
        || !(unsigned __int8)LdrpGetFileDriverStoreRoot(v70) )
      {
        goto LABEL_42;
      }
      v61 = v70;
      LOWORD(v60) = 2 * wcslen(v70);
      HIWORD(v60) = 702;
      RtlAppendUnicodeToString((int)&v60, (void *)L"\\");
      RtlAppendUnicodeStringToString(&v60, &v54);
      RtlAppendUnicodeToString((int)&v60, (void *)L"\\");
      RtlAppendUnicodeToString((int)&v60, DestinationString.Buffer);
      appended = LdrMapAndVerifyResourceFile(v59, (int)&v60, v55, a5, v54.Buffer, v56, &v51, &v57, &v58);
      goto LABEL_120;
    }
    v61 = v70;
    v60 = 46006272;
    v15 = a5 & 0x1000000;
    if ( (a5 & 0x1000000) != 0 )
    {
      for ( i = (unsigned __int16 *)&v71[2 * wcslen(Src) + 56]; i > Src && *i != 92; --i )
        ;
      if ( i <= Src )
      {
        appended = -1073741686;
        goto LABEL_120;
      }
      i[1] = 0;
      RtlAppendUnicodeToString((int)&v60, Src);
      v16 = L"SystemResources\\";
    }
    else
    {
      v16 = Src;
    }
    RtlAppendUnicodeToString((int)&v60, v16);
    if ( v15 )
      goto LABEL_32;
    v54.Buffer = (wchar_t *)&v69;
    v54.MaximumLength = 170;
    if ( (int)RtlLcidToLocaleName((unsigned __int16)v47, &v54, 2, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v60, &v54);
      RtlAppendUnicodeToString((int)&v60, (void *)L"\\");
LABEL_32:
      RtlAppendUnicodeToString((int)&v60, DestinationString.Buffer);
      if ( v15 )
      {
LABEL_36:
        v18 = v56;
        goto LABEL_37;
      }
      OverlayFilePath = GetOverlayFilePath((int)v54.Buffer, v61, &v43, v68);
      if ( OverlayFilePath == -1073741789 )
      {
        v17 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v43);
        v49 = v17;
        if ( !v17 )
          goto LABEL_35;
        OverlayFilePath = GetOverlayFilePath((int)v54.Buffer, v61, &v43, v17);
      }
      v17 = v49;
LABEL_35:
      if ( OverlayFilePath >= 0 && (int)RtlInitUnicodeStringEx(v34, v17) >= 0 )
      {
        v31 = LdrMapAndVerifyResourceFile(v59, (int)v34, v55, a5, v54.Buffer, 2, &v51, &v57, &v58);
        appended = v31;
        OverlayFilePath = v31;
        if ( v31 >= 0 )
        {
          RtlInitUnicodeStringEx(&v60, v49);
          goto LABEL_42;
        }
        if ( v31 != -1073741772 )
          LdrpLogMapAndVerifyResourceFileFailure(v55, a5, &v54);
      }
      goto LABEL_36;
    }
    appended = -1073741811;
LABEL_120:
    OverlayFilePath = appended;
    goto LABEL_42;
  }
  appended = LdrpGetModuleInfoFromVirtualMemory(702, &v41, &v46, &v53, &v55);
  OverlayFilePath = appended;
  if ( appended >= 0 )
  {
    v5 = v46;
    Str = v46;
    goto LABEL_13;
  }
LABEL_42:
  if ( !v58 )
    v58 = -1;
  if ( appended < 0 && (appended == -1073741523 || appended == -1073741659 || appended == -1073741801) )
    v20 = 0;
  else
    v20 = v63;
  if ( v20 )
    LdrpSetAlternateResourceModuleHandle(v59, &v58, &v51, 0, v47, v10 != 0 ? 33 : 1, appended, v57);
  if ( v58 == -1 )
  {
    *v50 = 0;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (int)NtCurrentPeb()->SharedData + 555;
    else
      v21 = 2147353477;
    if ( (*(_BYTE *)v21 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v32 = (int)NtCurrentPeb()->SharedData + 554;
      else
        v32 = 2147353476;
      LdrpTraceLoadMUIDll(&v60, *(unsigned __int8 *)v32);
    }
    ms_exc.registration.TryLevel = 2;
    *v50 = v58;
    if ( v44 )
      *v44 = v57;
    appended = 0;
    OverlayFilePath = 0;
    ms_exc.registration.TryLevel = -2;
  }
  if ( v46 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v46);
    appended = OverlayFilePath;
  }
  if ( v40 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
    appended = OverlayFilePath;
  }
  if ( v45 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
    appended = OverlayFilePath;
  }
  if ( v49 && v68 != v49 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v49);
    return OverlayFilePath;
  }
  return appended;
}
