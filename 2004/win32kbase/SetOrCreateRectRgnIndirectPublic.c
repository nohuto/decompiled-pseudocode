/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C0084880
 * Callers:
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0010AE0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0013354 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG right; // esi
  LONG bottom; // ebp
  LONG top; // r14d
  LONG left; // r15d
  __int64 v8; // rdi
  LONG v9; // edx
  LONG v10; // r9d
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // zf
  int *v16; // r8
  int v17; // eax
  _DWORD *v18; // r8
  int *v19; // r8
  int v20; // eax
  char *v21; // rcx
  _DWORD *v22; // r8
  char *v23; // r8
  __int128 v24; // [rsp+20h] [rbp-48h]
  _QWORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( *a1 )
  {
    right = a2->right;
    bottom = a2->bottom;
    top = a2->top;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, *a1, 0);
    v8 = v25[0];
    if ( v25[0] )
    {
      *((_QWORD *)&v24 + 1) = __PAIR64__(bottom, right);
      v9 = left;
      *(_QWORD *)&v24 = __PAIR64__(top, left);
      v10 = top;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && ((right & 0xF8000000) == 0 || (right & 0xF8000000) == 0xF8000000)
        && ((top & 0xF8000000) == 0 || (top & 0xF8000000) == 0xF8000000) )
      {
        if ( left > right )
        {
          v9 = right;
          DWORD2(v24) = left;
          LODWORD(v24) = right;
          right = left;
        }
        if ( top > bottom )
        {
          v10 = bottom;
          DWORD1(v24) = bottom;
          bottom = top;
          HIDWORD(v24) = top;
        }
        if ( v9 == right || v10 == bottom )
        {
          v14 = *(_QWORD *)(v25[0] + 88LL);
          *(_QWORD *)(v25[0] + 96LL) = 0LL;
          *(_QWORD *)(v8 + 104) = 0LL;
          *(_DWORD *)(v8 + 80) = 16;
          *(_DWORD *)(v8 + 84) = 1;
          *(_DWORD *)v14 = 0;
          v2 = 1;
          *(_DWORD *)(v14 + 4) = 0x80000000;
          *(_QWORD *)(v14 + 8) = 0x7FFFFFFFLL;
          *(_QWORD *)(v8 + 40) = v14 + 16;
        }
        else
        {
          v15 = *(_DWORD *)(v25[0] + 80LL) == 56;
          v16 = *(int **)(v25[0] + 88LL);
          *(_OWORD *)(v25[0] + 96LL) = v24;
          if ( v15 )
          {
            v17 = *v16;
            v2 = 1;
            v16[2] = v10;
            v18 = (int *)((char *)v16 + (unsigned int)(4 * v17 + 16));
            v18[1] = v10;
            v18[2] = bottom;
            v18[3] = v9;
            v18[4] = right;
            v19 = (_DWORD *)((char *)v18 + (unsigned int)(4 * *v18 + 16));
            v20 = *v19;
            v19[1] = bottom;
            v21 = (char *)v19 + (unsigned int)(4 * v20 + 16);
          }
          else
          {
            *(_DWORD *)(v8 + 80) = 56;
            *(_DWORD *)(v8 + 84) = 3;
            *v16 = 0;
            v16[3] = 0;
            v16[1] = 0x80000000;
            v16[2] = v10;
            v22 = v16 + 4;
            *v22 = 2;
            v22[1] = v10;
            v22[2] = bottom;
            v22[3] = v9;
            v22[4] = right;
            v22[5] = 2;
            v23 = (char *)v22 + (unsigned int)(4 * *v22 + 16);
            v21 = v23 + 16;
            *(_DWORD *)v23 = 0;
            v2 = 1;
            *((_DWORD *)v23 + 1) = bottom;
            *((_QWORD *)v23 + 1) = 0x7FFFFFFFLL;
          }
          *(_QWORD *)(v8 + 40) = v21;
        }
      }
    }
    if ( !v26 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v25);
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v13 = (__int64)RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  HmgSetOwner(v13, 0, 4);
  return 1LL;
}
