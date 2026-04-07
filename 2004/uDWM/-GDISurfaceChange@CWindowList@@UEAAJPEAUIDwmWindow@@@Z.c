/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DE40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180011E08 (--0CWindowData@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18001BB90 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A38 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002BFA4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  CWindowData *v4; // rsi
  int v5; // edi
  CWindowData *v6; // rbx
  int v7; // ebx
  char v8; // al
  __int64 v9; // rcx
  char v10; // dl
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned int v18; // r15d
  unsigned int v19; // edi
  __int64 v20; // r12
  int v21; // eax
  int updated; // eax
  CWindowData *v23; // rax
  int v24; // eax
  __int128 v25; // [rsp+38h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-29h]
  unsigned int v27; // [rsp+50h] [rbp-21h]
  _QWORD Buffer[2]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v29; // [rsp+68h] [rbp-9h]
  __int128 v30; // [rsp+78h] [rbp+7h]
  __int128 v31; // [rsp+88h] [rbp+17h]
  __int64 v32; // [rsp+98h] [rbp+27h]
  char v33; // [rsp+A0h] [rbp+2Fh]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v23 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( v23 )
    v6 = CWindowData::CWindowData(v23);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    v7 = -2147024882;
    goto LABEL_32;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v24 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v24;
  if ( v24 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x886u);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x13F7u);
    goto LABEL_16;
  }
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
    v9 = *((_QWORD *)v4 + 48);
    v10 = *((_BYTE *)v4 + 609) ^ (*((_BYTE *)v4 + 609) ^ (32 * v8)) & 0x20;
    *((_BYTE *)v4 + 609) = v10;
    if ( v9 )
    {
      v11 = *(_DWORD *)(v9 + 80);
      if ( (v10 & 0x20) != 0 )
      {
        if ( (v11 & 0x2000000) == 0 )
        {
          v12 = *(_QWORD *)(v9 + 24);
          *(_DWORD *)(v9 + 80) = v11 | 0x2000000;
          while ( v12 && (*(_BYTE *)(v12 + 80) & 1) == 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
            v12 = *(_QWORD *)(v12 + 24);
          }
        }
      }
      else
      {
        *(_DWORD *)(v9 + 80) = v11 & 0xFDFFFFFF;
      }
    }
    v7 = 0;
    if ( *((_DWORD *)v4 + 114) )
    {
      v16 = *((_QWORD *)v4 + 54);
      v17 = *((unsigned int *)v4 + 114);
      v26 = 0LL;
      v25 = 0LL;
      v27 = 0;
      if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v25, 8LL, v17, v16) >= 0 )
      {
        v18 = v27;
        v19 = 0;
        if ( v27 )
        {
          v20 = v25;
          while ( 1 )
          {
            v21 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v20 + 8LL * v19));
            v7 = v21;
            if ( v21 < 0 )
              break;
            if ( ++v19 >= v18 )
              goto LABEL_22;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x1ECAu);
        }
      }
LABEL_22:
      DynArrayImpl<0>::~DynArrayImpl<0>(&v25);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1403u);
    }
    else
    {
      v13 = *((_QWORD *)v4 + 15);
      Buffer[1] = 0LL;
      v32 = -1LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      Buffer[0] = v13;
      v33 = 0;
      v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v14 )
        v14 = (_QWORD *)v14[8];
      if ( *((_QWORD **)v4 + 5) == v14 )
      {
        updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v4 + 15));
        v7 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1408u);
      }
    }
  }
LABEL_16:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
