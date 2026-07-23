/*
 * XREFs of _swprintf @ 0x4B2F7560
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 */

int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  int v3; // esi
  wchar_t *v4; // ecx
  wchar_t *v6; // [esp+4h] [ebp-20h] BYREF
  int v7; // [esp+8h] [ebp-1Ch]
  wchar_t *v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+10h] [ebp-14h]

  if ( (_DWORD)BufferCount && Buffer )
  {
    v8 = Buffer;
    v6 = Buffer;
    v9 = 66;
    v7 = 0x7FFFFFFF;
    v3 = _woutput_l(&v6, BufferCount, 0, (char *)&BufferCount + 4);
    if ( --v7 < 0 )
    {
      _flsbuf_s(0, &v6);
      v4 = v6;
    }
    else
    {
      *(_BYTE *)v6 = 0;
      v4 = (wchar_t *)((char *)v6 + 1);
      v6 = (wchar_t *)((char *)v6 + 1);
    }
    if ( --v7 < 0 )
      _flsbuf_s(0, &v6);
    else
      *(_BYTE *)v4 = 0;
    return v3;
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}
