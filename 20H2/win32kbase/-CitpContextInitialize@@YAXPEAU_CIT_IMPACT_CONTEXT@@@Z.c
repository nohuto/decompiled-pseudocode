/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009CE0C
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C009CD0C (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0065B64 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C009CF34 (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  char v3; // al
  int v4; // edx
  __int64 v5; // rax

  memset(a1, 0, 0x380uLL);
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 107) = (char *)a1 + 848;
  *((_QWORD *)a1 + 106) = (char *)a1 + 848;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 112) & 0xF9 | 2;
  *((_DWORD *)a1 + 52) = v2;
  *((_DWORD *)a1 + 53) = v2;
  *((_DWORD *)a1 + 50) = 1;
  *((_BYTE *)a1 + 112) = v3;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 220), 1);
  *((_DWORD *)a1 + 58) = v2;
  *((_DWORD *)a1 + 59) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 244), v4);
  *((_DWORD *)a1 + 206) = v2;
  *((_DWORD *)a1 + 207) = v2;
  memset((char *)a1 + 594, 0, 0xE6uLL);
  *((_WORD *)a1 + 296) = 210;
  v5 = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 77) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 78) = v5;
  *((_WORD *)a1 + 297) = 232;
  CitpContextResetTrackingValues(a1, v2);
}
