/*
 * XREFs of ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C027C1F8
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027C708 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027D2F4 (GreDrawEscape.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0280910 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027FDA8 (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029B718 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029B768 (-bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E54C (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

void __fastcall DEVEXCLUDERECT::~DEVEXCLUDERECT(DEVEXCLUDERECT *this)
{
  DEVEXCLUDERECT *v1; // r8
  __int64 *v2; // rcx
  struct SURFACE *v3; // rdi
  int v4; // r9d
  __int64 v5; // rdx
  struct SURFACE *v6; // rbx
  __int64 v7; // rdx

  v1 = this;
  if ( *(_DWORD *)this )
  {
    v2 = (__int64 *)*((_QWORD *)this + 4);
    v3 = 0LL;
    v4 = 0x4000;
    if ( v2 )
    {
      v5 = *v2;
      if ( (*(_DWORD *)(*v2 + 36) & 0x4000) != 0 && *(void **)(v5 + 48) == gpRedirDev )
        v3 = *(struct SURFACE **)(v5 + 496);
    }
    if ( v3 )
    {
      bUndoMakeOpaque(v3);
      v2 = (__int64 *)*((_QWORD *)v1 + 4);
    }
    v6 = 0LL;
    if ( v2 )
    {
      v7 = *v2;
      if ( (v4 & *(_DWORD *)(*v2 + 36)) != 0 && *(void **)(v7 + 48) == gpBmpDev )
      {
        v6 = *(struct SURFACE **)(v7 + 496);
        if ( v6 )
          bBmpUndoMakeOpaque(*(struct SURFACE **)(v7 + 496));
      }
    }
    GreUnTearDownSprites(*((HDEV *)v1 + 1), (struct _RECTL *)v1 + 1, (int)v1);
    if ( v6 )
      bBmpMakeOpaque(v6);
    if ( v3 )
      bMakeOpaque(v3);
  }
}
