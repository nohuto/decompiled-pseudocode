/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0008300
 * Callers:
 *     _GetWindowIcon @ 0x1C0008284 (_GetWindowIcon.c)
 * Callees:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C00AF2E4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  HICON EmptyCursorObject; // rax
  __int64 v4; // rdx
  size_t Size; // [rsp+28h] [rbp-79h]
  __int128 v7; // [rsp+38h] [rbp-69h] BYREF
  __int128 v8; // [rsp+48h] [rbp-59h]
  struct _UNICODE_STRING v9; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v10[9]; // [rsp+68h] [rbp-39h] BYREF
  size_t v11; // [rsp+110h] [rbp+6Fh] BYREF

  v1 = 0LL;
  LODWORD(v11) = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)&v7, 0LL, 0LL, (unsigned int *)&v11, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0);
    LOBYTE(v4) = 3;
    v1 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, v4);
    if ( v1 )
    {
      v9 = 0LL;
      memset(v10, 0, 0x88uLL);
      if ( (_DWORD)v7 )
        LOWORD(v10[1]) = 3;
      else
        LOWORD(v10[1]) = 1;
      LODWORD(Size) = 0;
      LODWORD(v10[5]) = v11;
      *(_QWORD *)((char *)&v10[5] + 4) = *(_QWORD *)((char *)a1 + 140);
      WORD6(v10[1]) = WORD2(v7);
      HIWORD(v10[1]) = WORD4(v7);
      v10[2] = v8;
      if ( !_SetCursorIconData(v1, &v9, &v9, (struct tagCURSORDATA *)v10, Size) )
      {
        _DestroyCursor(v1, 0);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v8);
      GreDeleteObject(*((_QWORD *)&v8 + 1));
    }
  }
  return v1;
}
