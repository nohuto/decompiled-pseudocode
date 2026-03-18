/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C001B3CC
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001B5EC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001B944 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C001BAB8 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075490 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnLocked(DC **this, struct _RECTL *a2, int a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  DC *v7; // rcx
  struct REGION *v8; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  ULONG v13; // ecx
  struct REGION *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  struct REGION *v15; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3 & 0xF7FFFFFF;
  v5 = 0;
  if ( (a3 & 0xF7FFFFFF) - 1 > 4 )
  {
    v13 = 87;
    goto LABEL_29;
  }
  v7 = *this;
  if ( !v7 )
  {
    v13 = 6;
LABEL_29:
    EngSetLastError(v13);
    return v5;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    if ( v4 == 5 )
    {
      v5 = DC::iSelectTightenRao(v7, 0LL, 5);
      DC::bTightenRao(*this);
      if ( v5 )
      {
        v8 = DC::prgnVisSnap(*this);
        if ( *((_DWORD *)v8 + 21) == 1 )
          return 1;
        else
          return (unsigned int)(*((_DWORD *)v8 + 20) > 0x38u) + 2;
      }
    }
    return v5;
  }
  v10 = *((_QWORD *)v7 + 20);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 80) == 56 )
    {
      v11 = *(_OWORD *)(v10 + 96);
      v12 = *(_QWORD *)(v10 + 96);
      *(_OWORD *)v14 = v11;
      if ( a2->left == (_DWORD)v12
        && *(_QWORD *)&a2->top == __PAIR64__((unsigned int)v14[1], HIDWORD(v12))
        && a2->bottom == HIDWORD(v14[1]) )
      {
        v15 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
        return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v15);
      }
    }
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
  if ( !v14[0] )
  {
LABEL_25:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v14);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
    if ( LODWORD(v14[1]) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
    return v5;
  }
  if ( ((a2->left & 0xF8000000) == 0 || (a2->left & 0xF8000000) == -134217728)
    && (((a2->bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((a2->right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && ((a2->top & 0xF8000000) == 0 || (a2->top & 0xF8000000) == -134217728)
    && !(unsigned int)ERECTL::bWrapped((ERECTL *)a2) )
  {
    RGNOBJ::vSet((RGNOBJ *)v14, a2);
    v5 = DC::iSelectTightenRao(*this, v14[0], v4);
    DC::bTightenRao(*this);
    if ( v5 )
    {
      v15 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
    }
    goto LABEL_25;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
  return 0LL;
}
