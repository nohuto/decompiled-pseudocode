/*
 * XREFs of BcpGetProgressMessages @ 0x1403BCBAC
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x140A97A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     wcsstr @ 0x1403D4300 (wcsstr.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     BcpFindMessage @ 0x140A97E2C (BcpFindMessage.c)
 */

__int64 __fastcall BcpGetProgressMessages(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  const wchar_t *Message; // rbp
  wchar_t *v6; // r14
  size_t v7; // rdi
  _WORD *Memory; // rax
  unsigned int v9; // ebx
  _WORD *v10; // rsi

  Message = (const wchar_t *)BcpFindMessage();
  v6 = wcsstr(Message, L"%1");
  v7 = (char *)v6 - (char *)Message;
  Memory = (_WORD *)BgpFwAllocateMemory((char *)v6 - (char *)Message + 2);
  v9 = 0;
  v10 = Memory;
  if ( Memory )
  {
    memmove(Memory, Message, v7);
    *a2 = v10;
    *a3 = v6 + 2;
    v10[v7 >> 1] = 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
