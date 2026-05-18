/*
 * XREFs of ?GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ @ 0x180066480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::details::UMSBackgroundPoller *__fastcall Concurrency::details::ResourceManager::GetUMSBackgroundPoller(
        Concurrency::details::ResourceManager *this)
{
  return (struct Concurrency::details::UMSBackgroundPoller *)*((_QWORD *)this + 19);
}
