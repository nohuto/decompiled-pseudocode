/*
 * XREFs of ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12
 * Callers:
 *     __GetWindowIcon@8 @ 0xC4AB8 (__GetWindowIcon@8.c)
 * Callees:
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YGPAUHICON__@@_N@Z @ 0x9D76E (-_CreateEmptyCursorObject@@YGPAUHICON__@@_N@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct tagCURSOR *__thiscall _DuplicateCursor(_QWORD *this)
{
  _DWORD *v2; // ebx
  int EmptyCursorObject; // eax
  USHORT v4; // ax
  unsigned int *v6; // [esp+0h] [ebp-88h]
  struct tagCURSORDATA *v7; // [esp+0h] [ebp-88h]
  bool v8; // [esp+4h] [ebp-84h]
  unsigned int v9; // [esp+4h] [ebp-84h]
  struct _UNICODE_STRING v10; // [esp+10h] [ebp-78h] BYREF
  int v11; // [esp+18h] [ebp-70h]
  int v12; // [esp+1Ch] [ebp-6Ch] BYREF
  int v13; // [esp+20h] [ebp-68h]
  int v14; // [esp+24h] [ebp-64h]
  WCHAR *v15; // [esp+28h] [ebp-60h]
  int v16; // [esp+2Ch] [ebp-5Ch]
  struct _UNICODE_STRING v17[11]; // [esp+30h] [ebp-58h] BYREF

  v12 = 0;
  v2 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  *(_DWORD *)&v10.Length = 0;
  if ( _InternalGetIconInfo(&v12, (int)this, 0, 0, &v10, 0, v6, v8) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0);
    v2 = (_DWORD *)HMValidateHandle(EmptyCursorObject, 3);
    if ( v2 )
    {
      v10.Buffer = 0;
      v11 = 0;
      memset(v17, 0, sizeof(v17));
      if ( v12 )
        v4 = 3;
      else
        v4 = 1;
      v17[1].Length = v4;
      v17[6].Buffer = *(PWSTR *)&v10.Length;
      v17[7] = (struct _UNICODE_STRING)this[11];
      v17[2].Length = v13;
      v17[2].MaximumLength = v14;
      v17[2].Buffer = v15;
      *(_DWORD *)&v17[3].Length = v16;
      if ( !_SetCursorIconData((int)&v10.Buffer, (int)v2, (struct tagCURSOR *)&v10.Buffer, v17, 0, v7, v9) )
      {
        _DestroyCursor(v2, 0);
        return 0;
      }
    }
    else
    {
      GreDeleteObject(v15);
      GreDeleteObject(v16);
    }
  }
  return (struct tagCURSOR *)v2;
}
