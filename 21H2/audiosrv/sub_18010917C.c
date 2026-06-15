/*
 * XREFs of sub_18010917C @ 0x18010917C
 * Callers:
 *     sub_1801077B0 @ 0x1801077B0 (sub_1801077B0.c)
 * Callees:
 *     sub_1800B4B04 @ 0x1800B4B04 (sub_1800B4B04.c)
 */

bool __fastcall sub_18010917C(__int64 a1)
{
  char v2; // bl
  void *v3; // rcx
  DWORD v4; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v3 = *(void **)(a1 + 224);
  if ( v3 )
  {
    v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
    if ( v4 != 258 )
    {
      if ( v4 )
      {
        sub_1800B4B04((int)retaddr, 2569);
        __debugbreak();
      }
      return *(_BYTE *)(a1 + 136) == 0;
    }
  }
  return v2;
}
