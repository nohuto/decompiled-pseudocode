/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0288C1C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008E5FC (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C006736C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ZwWin32CreateSection @ 0x1C008EA34 (ZwWin32CreateSection.c)
 *     ZwWin32CreateSectionRetainHandle @ 0x1C008EA90 (ZwWin32CreateSectionRetainHandle.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C0288F3C (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C02894C0 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

__int64 __fastcall ObtainSectionForNetworkedFontFile(
        PCUNICODE_STRING SourceString,
        struct _FILEVIEW *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        bool a5)
{
  unsigned int v6; // r12d
  int SectionRetainHandle; // esi
  const WCHAR *v9; // rdx
  void **v10; // rax
  void **SectionHandle; // rdi
  unsigned int v12; // edi
  struct _UNICODE_STRING *v13; // rbx
  void **inserted; // rax
  void **v15; // r15
  __int64 v16; // rdx
  int v17; // edx
  void *v18; // rcx
  unsigned int v19; // ecx
  int v21; // [rsp+28h] [rbp-69h]
  int v22; // [rsp+28h] [rbp-69h]
  void *v23; // [rsp+38h] [rbp-59h]
  void *v24; // [rsp+38h] [rbp-59h]
  int v25; // [rsp+40h] [rbp-51h]
  PVOID Object; // [rsp+50h] [rbp-41h] BYREF
  PVOID v27; // [rsp+58h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-31h] BYREF
  int v29[2]; // [rsp+68h] [rbp-29h]
  __int128 Buffer; // [rsp+70h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  __int64 v32; // [rsp+90h] [rbp-1h]

  *(_QWORD *)v29 = a4;
  v6 = -1073741823;
  v27 = a3;
  SectionRetainHandle = -1073741823;
  v28 = *(_QWORD *)gpxsGlobals;
  GreAcquireSemaphore(v28);
  v9 = SourceString->Buffer;
  Buffer = 0LL;
  v32 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, v9);
  v10 = (void **)RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), &Buffer);
  SectionHandle = v10;
  if ( v10 )
  {
    ++*((_DWORD *)v10 + 8);
    SEMOBJ::vUnlock((SEMOBJ *)&v28);
    GreEnterCriticalRegionAndAcquirePushLockShared(SectionHandle + 1);
    GreLeaveCriticalRegionAndReleasePushLockShared(SectionHandle + 1);
    v18 = *SectionHandle;
    if ( *SectionHandle )
    {
      v27 = 0LL;
      SectionRetainHandle = ObReferenceObjectByHandle(v18, 0xF001Fu, MmSectionObjectType, 0, &v27, 0LL);
      *((_QWORD *)a2 + 4) = v27;
      if ( SectionRetainHandle >= 0 )
        goto LABEL_21;
    }
    bUnreferenceNetworkedFontFileNode(SectionHandle);
LABEL_20:
    if ( SectionRetainHandle < 0 )
    {
LABEL_23:
      v6 = SectionRetainHandle;
      goto LABEL_24;
    }
LABEL_21:
    v19 = *((_DWORD *)a2 + 10) & 0xFFFFFFFB | (4 * a5);
    *((_QWORD *)a2 + 7) = SectionHandle;
    *((_DWORD *)a2 + 10) = v19;
    if ( (v19 & 4) == 0 )
    {
      ZwClose(*((HANDLE *)a2 + 6));
      *((_QWORD *)a2 + 6) = 0LL;
    }
    goto LABEL_23;
  }
  v12 = 2 * SourceString->Length + 36;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Object, v12);
  v13 = (struct _UNICODE_STRING *)Object;
  if ( Object )
  {
    *((_DWORD *)Object + 8) = 1;
    v13[1].Buffer = &v13[2].MaximumLength + 1;
    v13[1].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(v13 + 1, SourceString);
    inserted = (void **)RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), v13, v12, 0LL);
    SectionHandle = inserted;
    if ( inserted )
    {
      inserted[3] = (char *)inserted + 36;
      GreInitializePushLock(inserted + 1);
      GreEnterCriticalRegionAndAcquirePushLockExclusive(SectionHandle + 1);
      SEMOBJ::vUnlock((SEMOBJ *)&v28);
      v15 = (void **)((char *)a2 + 32);
      SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                              (_QWORD *)a2 + 4,
                              v16,
                              (struct _OBJECT_ATTRIBUTES *)v27,
                              *(union _LARGE_INTEGER **)v29,
                              4u,
                              v21,
                              0LL,
                              v23,
                              v25,
                              SectionHandle);
      if ( SectionRetainHandle < 0 )
      {
        *v15 = 0LL;
        *SectionHandle = 0LL;
      }
      else
      {
        Object = 0LL;
        SectionRetainHandle = ZwWin32CreateSection(
                                (int)&Object,
                                v17,
                                (int)v27,
                                v29[0],
                                2u,
                                v22,
                                *((void **)a2 + 6),
                                v24);
        if ( SectionRetainHandle >= 0 )
        {
          if ( !(unsigned int)bCopySection(*v15, Object, *((unsigned int *)a2 + 6)) )
            SectionRetainHandle = -1073741823;
          ObfDereferenceObject(Object);
        }
      }
      GreLeaveCriticalRegionAndReleasePushLockExclusive(SectionHandle + 1);
      if ( SectionRetainHandle < 0 )
      {
        if ( *v15 )
        {
          ObfDereferenceObject(*v15);
          *v15 = 0LL;
        }
        bUnreferenceNetworkedFontFileNode(SectionHandle);
      }
      Win32FreePool(v13);
      goto LABEL_20;
    }
    v6 = -1073741801;
    Win32FreePool(v13);
  }
LABEL_24:
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  return v6;
}
