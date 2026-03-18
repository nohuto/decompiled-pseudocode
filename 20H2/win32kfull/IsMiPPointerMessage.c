/*
 * XREFs of IsMiPPointerMessage @ 0x1C01E176C
 * Callers:
 *     xxxPointerCallHook @ 0x1C01EFECC (xxxPointerCallHook.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     IsPointerParentNotify @ 0x1C00D7118 (IsPointerParentNotify.c)
 */

__int64 __fastcall IsMiPPointerMessage(unsigned int a1)
{
  BOOL v1; // eax
  unsigned __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // r8d
  unsigned __int64 v6; // rdx

  v1 = IsPointerInputMessage(a1);
  v4 = 0;
  if ( v1 )
    goto LABEL_2;
  if ( IsPointerParentNotify(v3, v2) )
  {
    v2 = v6 >> 16;
LABEL_2:
    LOBYTE(v4) = (_WORD)v2 == 1;
    return v4;
  }
  return 0LL;
}
