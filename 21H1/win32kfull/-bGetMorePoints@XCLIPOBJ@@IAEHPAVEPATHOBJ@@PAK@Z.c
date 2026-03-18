/*
 * XREFs of ?bGetMorePoints@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PAK@Z @ 0x22376E
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z @ 0x2236A0 (-bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall XCLIPOBJ::bGetMorePoints(XCLIPOBJ *this, struct EPATHOBJ *a2, unsigned int *a3)
{
  _DWORD *v4; // edx
  int v5; // eax
  int result; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  POINTFIX *pptfx; // ecx
  struct _PATHDATA v10; // [esp+8h] [ebp-Ch] BYREF

  v4 = (_DWORD *)*((_DWORD *)this + 30);
  v5 = v4[4];
  if ( (v5 & 0x200000) != 0 )
  {
    v4[4] = v5 | 0x2000000;
    return 0;
  }
  if ( *v4 == 1 )
  {
    v7 = (_DWORD *)v4[3];
    v4[1] = *v7;
    v4[2] = v7[1];
  }
  memset(&v10, 0, sizeof(v10));
  if ( !EPATHOBJ::bEnum(a2, &v10) )
  {
    *(_DWORD *)(*((_DWORD *)this + 30) + 16) |= 0x200000u;
    if ( !v10.count )
      goto LABEL_11;
  }
  v8 = (_DWORD *)*((_DWORD *)this + 30);
  pptfx = v10.pptfx;
  if ( (v10.flags & 1) != 0 )
  {
    v8[46] = v10.pptfx->x;
    v8[47] = pptfx->y;
    *(POINTFIX *)(*((_DWORD *)this + 30) + 4) = *v10.pptfx;
    if ( v10.count == 1 )
    {
      if ( !EPATHOBJ::bEnum(a2, &v10) )
      {
        *(_DWORD *)(*((_DWORD *)this + 30) + 16) |= 0x200000u;
        if ( !v10.count )
        {
LABEL_11:
          *(_DWORD *)(*((_DWORD *)this + 30) + 16) |= 0x2000000u;
          return 0;
        }
      }
      *(_DWORD *)(*((_DWORD *)this + 30) + 12) = v10.pptfx;
      **((_DWORD **)this + 30) = v10.count;
    }
    else
    {
      *(_DWORD *)(*((_DWORD *)this + 30) + 12) = v10.pptfx + 1;
      **((_DWORD **)this + 30) = v10.count - 1;
    }
  }
  else
  {
    v8[3] = v10.pptfx;
    **((_DWORD **)this + 30) = v10.count;
  }
  result = 1;
  *a3 = v10.flags;
  return result;
}
