/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontDataRequest@@UAEXPAX@Z @ 0x8C04A
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z.c)
 *     ?ValidateGlyphBitsBuffer@@YG_NKJJKK@Z @ 0xF8BCC (-ValidateGlyphBitsBuffer@@YG_NKJJKK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryFontDataRequest::CaptureUsermodeParameters(QueryFontDataRequest *this, _DWORD *Src)
{
  const void *v4; // esi
  int v5; // edi
  void *v6; // eax
  void **v7; // ecx
  void *v8; // eax
  void *v9; // ecx
  size_t v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  struct _FONTOBJ *v18; // [esp+0h] [ebp-3Ch]
  unsigned int v19; // [esp+0h] [ebp-3Ch]
  struct _FONTOBJ *v20; // [esp+4h] [ebp-38h]
  unsigned int v21; // [esp+4h] [ebp-38h]
  int v22; // [esp+14h] [ebp-28h]
  void *Srca; // [esp+44h] [ebp+8h]

  v22 = Src[3];
  v4 = (const void *)Src[4];
  Srca = (void *)Src[5];
  v5 = Src[7];
  if ( v22 == *((_DWORD *)this + 14)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(v18, v20)
    && v5 >= 0
    && Srca == *((void **)this + 16) )
  {
    v6 = (void *)*((_DWORD *)this + 10);
    if ( v6 )
    {
      if ( v4 != *((const void **)this + 15) )
        return;
      qmemcpy(v6, v4, 0x40u);
      v7 = (void **)*((_DWORD *)this + 10);
      if ( *v7 == Srca )
        v8 = (void *)*((_DWORD *)this + 11);
      else
        v8 = 0;
      *v7 = v8;
    }
    else if ( v4 )
    {
      return;
    }
    v9 = (void *)*((_DWORD *)this + 11);
    if ( !v9 )
      goto LABEL_27;
    v10 = *((_DWORD *)this + 12);
    if ( !v10 )
      goto LABEL_27;
    v11 = *((_DWORD *)this + 7);
    if ( v11 == 2 )
      goto LABEL_27;
    if ( v5 <= v10 && (v11 != 3 || v5 == 124) )
    {
      memcpy(v9, Srca, v10);
      v12 = *((_DWORD *)this + 7);
      if ( v12 != 3 )
      {
        v13 = (_DWORD *)*((_DWORD *)this + 10);
        if ( v13 )
        {
          v14 = v13[9] - v13[7];
          v15 = v13[10] - v13[8];
          v16 = 0;
          if ( v12 == 5 )
          {
            v17 = ((unsigned int)(v14 + 7) >> 3) + 3;
          }
          else
          {
            if ( v12 != 6 && (unsigned int)(v12 - 8) > 1 )
            {
LABEL_26:
              if ( !ValidateGlyphBitsBuffer(v15, v16, 0, v19, v21) )
                return;
              goto LABEL_27;
            }
            v17 = v14 + 3;
          }
          v16 = v17 & 0xFFFFFFFC;
          goto LABEL_26;
        }
      }
LABEL_27:
      *((_DWORD *)this + 13) = v5;
    }
  }
}
