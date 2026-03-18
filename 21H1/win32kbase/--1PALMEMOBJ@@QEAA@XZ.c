/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20
 * Callers:
 *     EngCreatePalette @ 0x1C0009A50 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C014C6C0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C0153460 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0156D6C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C02991B0 (bInitPALOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C0082FF0 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rdi
  void *v3; // rax
  struct _SLIST_ENTRY *v4; // rcx
  struct _SLIST_ENTRY *v5; // rbp
  unsigned __int8 *v6; // rax
  struct _SLIST_ENTRY *Next; // rdi
  int v8; // eax
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rdi
  unsigned int v11; // eax
  _DWORD *v12; // r14
  char v13; // al
  GdiHandleEntryDirectory **v14; // rdi
  unsigned int v15; // eax
  GdiHandleEntryDirectory *v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v1 = *this;
  if ( *this )
  {
    if ( !*((_DWORD *)this + 2) )
    {
      v3 = HmgRemoveObjectImpl((struct HOBJ__ *)v1->Next, 0, 1, 1u, 8, 0LL);
      v4 = *this;
      if ( v3 )
      {
        v5 = *this;
        if ( v4 != *(&v4[7].Next + 1) )
        {
          v27 = *((_QWORD *)&v4[7].Next + 1);
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v27);
          v4 = *this;
          v5 = *this;
        }
        v6 = (unsigned __int8 *)*((_QWORD *)&v4[6].Next + 1);
        if ( v6 )
        {
          if ( v6 != gpRGBXlate )
          {
            Win32FreePool(*((_QWORD *)&v4[6].Next + 1));
            v4 = *this;
          }
          *((_QWORD *)&v4[6].Next + 1) = 0LL;
          v5 = *this;
        }
        Next = v5[8].Next;
        if ( Next )
        {
          v8 = qword_1C0258BC0 ? qword_1C0258BC0() : -1073741637;
          if ( v8 >= 0 && qword_1C0258BC8 )
            qword_1C0258BC8(Next);
        }
        v9 = gpTypeIsolation[1];
        if ( v9 )
        {
          memset(v5, 0, 0x90uLL);
          ++*((_DWORD *)v9 + 19);
          v10 = v9 + 48;
          if ( ExQueryDepthSList((PSLIST_HEADER)v10) >= *((_WORD *)v10 + 8) )
          {
            ++*((_DWORD *)v10 + 8);
            (*((void (__fastcall **)(struct _SLIST_ENTRY *, unsigned __int8 *))v10 + 7))(v5, v10);
          }
          else
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v10, v5);
          }
        }
      }
      else
      {
        HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      goto LABEL_16;
    }
    v11 = (unsigned int)v1->Next;
    v25 = 0LL;
    v26 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v11 | (v11 >> 8) & 0xFF0000, 0, 0, 1);
    if ( !v26 )
    {
LABEL_16:
      *this = 0LL;
      return;
    }
    v12 = (_DWORD *)v25;
    v13 = *(_BYTE *)(v25 + 14);
    if ( v13 == 5 )
    {
      v23 = *((_QWORD *)&v1[42].Next + 1);
      v24 = 0LL;
    }
    else
    {
      if ( v13 != 16 )
        goto LABEL_21;
      v23 = *((_QWORD *)&v1[8].Next + 1);
      v24 = 2LL;
    }
    TrackObjectReferenceDecrement(v24, v23);
LABEL_21:
    --*((_DWORD *)&v1->Next + 2);
    v14 = (GdiHandleEntryDirectory **)gpHandleManager;
    v15 = GdiHandleManager::DecodeIndex(gpHandleManager, *v12 & 0xFFFFFF);
    v16 = v14[2];
    v17 = v15;
    v18 = *((_DWORD *)v16 + 514);
    if ( v15 >= v18 + ((*((unsigned __int16 *)v16 + 1) + 0xFFFF) << 16) )
      goto LABEL_33;
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0LL;
    v20 = *((_QWORD *)v16 + v19 + 1);
    if ( (_DWORD)v19 )
      v17 = ((1 - (_DWORD)v19) << 16) - v18 + (unsigned int)v17;
    if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
LABEL_33:
      v21 = 0LL;
    else
      v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
    v22 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v14, (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000);
    GdiHandleEntryDirectory::ReleaseEntryLock(v14[2], v22);
    KeLeaveCriticalRegion();
    goto LABEL_16;
  }
}
