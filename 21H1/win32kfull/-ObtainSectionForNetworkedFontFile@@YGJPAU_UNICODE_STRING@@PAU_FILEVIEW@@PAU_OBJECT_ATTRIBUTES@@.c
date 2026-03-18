/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2
 * Callers:
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 * Callees:
 *     _ZwWin32CreateSection@36 @ 0x8CB02 (_ZwWin32CreateSection@36.c)
 *     _ZwWin32CreateSectionRetainHandle@40 @ 0x8CB3C (_ZwWin32CreateSectionRetainHandle@40.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?bCopySection@@YGHPAX0K@Z @ 0x1E8BF7 (-bCopySection@@YGHPAX0K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YG_NPAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1E8F4E (-bUnreferenceNetworkedFontFileNode@@YG_NPAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 *     ?pnffnReferenceNetworkedFontFileNode@@YGPAU_NETWORKED_FONT_FONT_FILE_NODE@@PBG@Z @ 0x1E8FA2 (-pnffnReferenceNetworkedFontFileNode@@YGPAU_NETWORKED_FONT_FONT_FILE_NODE@@PBG@Z.c)
 */

int __userpurge ObtainSectionForNetworkedFontFile@<eax>(
        int a1@<edx>,
        const UNICODE_STRING *a2@<ecx>,
        struct _OBJECT_ATTRIBUTES *ObjectAttributes,
        union _LARGE_INTEGER *Object,
        struct _OBJECT_ATTRIBUTES *a5,
        union _LARGE_INTEGER *a6,
        bool a7)
{
  int v8; // ebx
  void **v9; // edi
  size_t v10; // edi
  struct _UNICODE_STRING *v11; // esi
  PCUNICODE_STRING v12; // ecx
  void **inserted; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // esi
  void *v17; // ecx
  NTSTATUS v18; // eax
  int v19; // edx
  unsigned int v20; // ecx
  const unsigned __int16 *v22; // [esp+0h] [ebp-24h]
  struct _NETWORKED_FONT_FONT_FILE_NODE *v23; // [esp+0h] [ebp-24h]
  unsigned int v24; // [esp+4h] [ebp-20h]
  int v25; // [esp+10h] [ebp-14h] BYREF
  PVOID Buffer; // [esp+14h] [ebp-10h] BYREF
  PCUNICODE_STRING SourceString; // [esp+18h] [ebp-Ch]
  int v28; // [esp+1Ch] [ebp-8h]
  NTSTATUS SectionRetainHandle; // [esp+20h] [ebp-4h]

  v28 = a1;
  v8 = -1073741823;
  SourceString = a2;
  SectionRetainHandle = -1073741823;
  v25 = *(_DWORD *)gpxsGlobals;
  GreAcquireSemaphore(v25);
  v9 = (void **)pnffnReferenceNetworkedFontFileNode(v22);
  if ( v9 )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    GreEnterCriticalRegionAndAcquirePushLockShared(v9 + 1);
    GreLeaveCriticalRegionAndReleasePushLockShared(v9 + 1);
    v17 = *v9;
    if ( *v9 )
    {
      Object = 0;
      v18 = ObReferenceObjectByHandle(v17, 0xF001Fu, _MmSectionObjectType, 0, (PVOID *)&Object, 0);
      v19 = v28;
      v16 = v18;
      *(_DWORD *)(v28 + 20) = Object;
      if ( v18 >= 0 )
        goto LABEL_23;
    }
    else
    {
      v16 = SectionRetainHandle;
    }
    bUnreferenceNetworkedFontFileNode(v23);
LABEL_21:
    if ( v16 < 0 )
    {
LABEL_25:
      v8 = v16;
      goto LABEL_26;
    }
    v19 = v28;
LABEL_23:
    v20 = *(_DWORD *)(v19 + 24) & 0xFFFFFFFB | (4 * (unsigned __int8)a5);
    *(_DWORD *)(v19 + 32) = v9;
    *(_DWORD *)(v19 + 24) = v20;
    if ( (v20 & 4) == 0 )
    {
      ZwClose(*(HANDLE *)(v19 + 28));
      *(_DWORD *)(v28 + 28) = 0;
    }
    goto LABEL_25;
  }
  v10 = 2 * a2->Length + 20;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Buffer, v10);
  v11 = (struct _UNICODE_STRING *)Buffer;
  if ( Buffer )
  {
    v12 = SourceString;
    *((_DWORD *)Buffer + 3) = (char *)Buffer + 20;
    *(_DWORD *)&v11[2].Length = 1;
    v11[1].MaximumLength = v12->Length;
    RtlCopyUnicodeString(v11 + 1, v12);
    inserted = (void **)RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), v11, v10, 0);
    v9 = inserted;
    if ( !inserted )
    {
      v8 = -1073741801;
      Win32FreePool((PATHOBJ *)v11);
      goto LABEL_26;
    }
    inserted[3] = inserted + 5;
    GreInitializePushLock(inserted + 1);
    GreEnterCriticalRegionAndAcquirePushLockExclusive(v9 + 1);
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    SourceString = (PCUNICODE_STRING)(v28 + 20);
    SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                            (_DWORD *)(v28 + 20),
                            ObjectAttributes,
                            Object,
                            4u,
                            v14,
                            0,
                            v14,
                            v14,
                            v9);
    if ( SectionRetainHandle < 0 )
    {
      *(_DWORD *)&SourceString->Length = 0;
      *v9 = 0;
    }
    else
    {
      Buffer = 0;
      SectionRetainHandle = ZwWin32CreateSection(
                              &Buffer,
                              ObjectAttributes,
                              Object,
                              2u,
                              v15,
                              *(HANDLE *)(v28 + 28),
                              v15,
                              v15);
      if ( SectionRetainHandle >= 0 )
      {
        if ( !bCopySection(*(void **)(v28 + 16), v23, v24) )
          SectionRetainHandle = -1073741823;
        ObfDereferenceObject(Buffer);
      }
    }
    GreLeaveCriticalRegionAndReleasePushLockExclusive(v9 + 1);
    if ( SectionRetainHandle < 0 )
    {
      if ( *(_DWORD *)&SourceString->Length )
      {
        ObfDereferenceObject(*(PVOID *)&SourceString->Length);
        *(_DWORD *)&SourceString->Length = 0;
      }
      bUnreferenceNetworkedFontFileNode(v23);
    }
    Win32FreePool((PATHOBJ *)v11);
    v16 = SectionRetainHandle;
    goto LABEL_21;
  }
LABEL_26:
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  return v8;
}
