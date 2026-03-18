/*
 * XREFs of ??1?$AutoResource@$1?FreeTmpBuffer@@YGXPAX@Z@@QAE@XZ @ 0x1EE480
 * Callers:
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     <none>
 */

int __thiscall AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(_DWORD *this)
{
  int result; // eax

  result = *this;
  if ( *this )
  {
    result = FreeTmpBuffer(*this);
    *this = 0;
  }
  return result;
}
