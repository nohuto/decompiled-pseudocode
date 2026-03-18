/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C001E8F8
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x1C001F204 (GreSfmGetDirtyRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C001EB54 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C002B110 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

__int64 __fastcall GrepSfmGetDirtyRgn(
        struct SFMLOGICALSURFACE *a1,
        __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  unsigned int v13; // edi
  int *v14; // rcx
  __int64 v15; // rax
  HRGN v16; // rax
  __int64 v17; // r8
  int *v18; // rdx
  HRGN v19; // rax
  bool v21; // zf
  struct RGNOBJ *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  HRGN *v25; // r14
  HRGN *v26; // rdi
  HRGN v27; // rax
  struct _POINTL *v28; // rcx
  _BYTE v29[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h] BYREF
  int v31; // [rsp+30h] [rbp-20h]
  _QWORD v32[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v33; // [rsp+80h] [rbp+30h] BYREF

  v13 = -1073741811;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v29, (struct SFMLOGICALSURFACE *)((char *)a1 + 256));
  v14 = a9;
  *a9 = 0;
  if ( *((_QWORD *)a1 + 23) )
  {
    *v14 = *((_DWORD *)a1 + 42);
    if ( *((_DWORD *)a1 + 42) == 1
      && ((v23 = *((_QWORD *)a1 + 23)) == 0 ? (v24 = 0LL) : (v24 = *(_QWORD *)(v23 + 8)), v24 == a2) )
    {
      v25 = a6;
      if ( a6 )
      {
        v26 = a5;
        v33 = *((_QWORD *)a1 + 20);
        if ( a5 && *((_QWORD *)a1 + 18) )
        {
          a9 = (int *)*((_QWORD *)a1 + 18);
          *v26 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
        }
        EtwTranslationUpdateOffsetDWM(*(_QWORD *)a1, *((unsigned int *)a1 + 38), HIDWORD(*((_QWORD *)a1 + 19)));
        EtwTraceMoveRegion(*(_QWORD *)a1, 0LL, 6LL, *((_QWORD *)a1 + 20));
        v27 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v33);
        v28 = a7;
        *v25 = v27;
        if ( v28 )
          *v28 = *(struct _POINTL *)((char *)a1 + 152);
        METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a1 + 128), 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0LL;
    }
    if ( a8 )
      *a8 = (*((_DWORD *)a1 + 63) >> 4) & 1;
    if ( a3 )
    {
      v15 = *((_QWORD *)a1 + 23);
      if ( v15 )
        v15 = *(_QWORD *)(v15 + 8);
      if ( v15 == a2 )
      {
        a9 = (int *)*((_QWORD *)a1 + 16);
        if ( a9 )
        {
          EtwTraceDWMGetDirtyRegion(*(_QWORD *)a1, 0LL);
          v16 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
          *a3 = v16;
          if ( v16 )
          {
            *((_QWORD *)a1 + 16) = 0LL;
            *((_DWORD *)a1 + 63) &= ~2u;
          }
        }
      }
    }
    if ( a4 && ((*((_DWORD *)a1 + 63) & 4) != 0 || !a2) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
      v17 = *((_QWORD *)a1 + 11);
      v18 = (int *)*((_QWORD *)a1 + 10);
      v33 = v17;
      a9 = v18;
      if ( v30 )
      {
        if ( (v17 != 0) == (v18 != 0LL) )
        {
          if ( v17 && v18 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v32);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v32);
            if ( (*((_DWORD *)a1 + 63) & 4) != 0 )
            {
              if ( v32[0] && RGNOBJ::bMerge((RGNOBJ *)v32, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&a9, 8u) )
                RGNOBJ::vSwap((RGNOBJ *)v32, (struct RGNOBJ *)&v30);
            }
            else
            {
              RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v33);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v32);
          }
        }
        else
        {
          v21 = v18 == 0LL;
          v22 = (struct RGNOBJ *)&a9;
          if ( v21 )
            v22 = (struct RGNOBJ *)&v33;
          RGNOBJ::bCopy((RGNOBJ *)&v30, v22);
        }
        if ( a9 && (*((_DWORD *)a1 + 63) & 0x10) != 0 )
          RGNOBJ::vSet((RGNOBJ *)&a9);
        if ( v30 )
        {
          v19 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v30);
          *a4 = v19;
          if ( !v19 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
        }
      }
      if ( v31 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
    }
    v13 = 0;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v29);
  return v13;
}
